/*******************************************************************************

  Eurecom OpenAirInterface
  Copyright(c) 1999 - 2011 Eurecom

  This program is free software; you can redistribute it and/or modify it
  under the terms and conditions of the GNU General Public License,
  version 2, as published by the Free Software Foundation.

  This program is distributed in the hope it will be useful, but WITHOUT
  ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
  FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for
  more details.

  You should have received a copy of the GNU General Public License along with
  this program; if not, write to the Free Software Foundation, Inc.,
  51 Franklin St - Fifth Floor, Boston, MA 02110-1301 USA.

  The full GNU General Public License is included in this distribution in
  the file called "COPYING".

  Contact Information
  Openair Admin: openair_admin@eurecom.fr
  Openair Tech : openair_tech@eurecom.fr
  Forums       : http://forums.eurecom.fsr/openairinterface
  Address      : Eurecom, 2229, route des crêtes, 06560 Valbonne Sophia Antipolis, France

*******************************************************************************/

/**
 * \file defs.h
 * \brief Typedefs & Prototypes of OMG functions
 */

#ifndef __DEFS_H__
#define  __DEFS_H__

#include <stdlib.h>

// TYPEDEFS 

/*!A sructure that includes all the characteristic mobility elements of a node  */
typedef struct mobility_struct {
	double X_from; /*!< The X coordinate of the previous location of the node */
	double Y_from; /*!< The Y coordinate of the previous location of the node */
	double X_to; /*!< The X coordinate of the destination location of the node */
	double Y_to; /*!< The Y coordinate of the destination location of the node */
	double speed; /*!< The speed of the node */
	double sleep_duration; /*!< The sleep duration of the node (Used with the RWP model) */
	double azimuth; /*!< The direction in which the node moves (Used with RWALK model) */
	double journey_time; /*!< The duration of the node trip */
	double start_journey; /*!< The instant on which the node trip starts*/
}mobility_struct;

typedef struct mobility_struct *MobilityPtr; /*!< The typedef that reflects a #mobility_struct*/

/*!A sructure that defines a node and its associated informaion  */
typedef struct node_struct {
	int ID; /*!< The identifier of the node in question */
	int type; /*!< The node's type, it is one of types enumarated in #node_types */
	int mobile;  /*!< The node status: static or mobile  */
	double X_pos; /*!< The X coordinate of the current location of the node */
	double Y_pos; /*!< The Y coordinate of the current location of the node */
	mobility_struct *mob; /*!< An instantiation of the structure #mobility_struct that includes the mobility elements corresponding to the node*/
	int generator; /*!< The mobility generator according to which the node is moving or stagnating. It is one of the types enumarated in #mobility_types*/
}node_struct;

typedef struct node_struct* NodePtr; /*!< The typedef that reflects a #node_struct*/

/*!A sructure that gathers all the existing nodes */
struct node_list_struct {
	node_struct *node;  /*!< Avariable of type #NodePtr. It represents a node */
	struct node_list_struct *next; /*!< A pointer to the next element */
}node_list_struct;

typedef struct node_list_struct* Node_list; /*!< The typedef that reflects a #node_list_struct*/

/*!A sructure that represents a peer (Node, Time), i.e the node in question and its job (move or sleep) execution time. It is the atomic component of the #job_list_struct structure*/
typedef struct pair_struct {
	node_struct *b; /*!< A variable of type #NodePtr. It represents a node */
	double a;  /*!< The corresponding time of job execution */
}pair_struct;

typedef struct pair_struct* Pair;  /*!< The typedef that reflects a #pair_struct*/


/*!A sructure that gathers the jobs to be executed by all the non static nodes. In the context of OMG, a job is either a move or a sleep */
struct job_list_struct {
	Pair pair; /*!< A variable of type #Pair. It represents a (Node, job-execution Time) peer */
	struct job_list_struct *next; /*!< A pointer to the next element */
}job_list_struct;
typedef struct job_list_struct* Job_list;  /*!< The typedef that reflects a #job_list_struct*/

/*!A sructure that gathers the ultimate parameters needed to launch a simulation scenario */
typedef struct omg_global_param{
	int nodes; /*!< The total number of nodes */
	double min_X; /*!< The minimum value that the X coordinate might take. In other words, the minimum boundary of the simulation area according to the X axis */
	double max_X; /*!< The maximum value that the X coordinate might take, i.e the maximum boundary of the simulation area according to the X axis*/
	double min_Y; /*!< The minimum value that the Y coordinate might take, i.e the minimum boundary of the simulation area according to the Y axis */
	double max_Y; /*!< The minimum value that the Y coordinate might take, i.e the maximum boundary of the simulation area according to the Y axis */
	double min_speed; /*!< The minimum speed. It should be different than 0.0 in order to avoid instability*/ 
	double max_speed; /*!< The maximum allowed speed */ 
	double min_journey_time; /*!< The minimum allowed trip duration. It should be different than 0.0 in order to avoid instability and properly reflect the mobility model behavior */ 
	double max_journey_time; /*!< The maximum allowed trip duration */
	double min_azimuth; /*!< The minimum allowed value of the RWALK movement angle*/
	double max_azimuth; /*!< The maximum allowed value of the RWALK movement angle */
	double min_sleep; /*!< The minimum allowed sleep duration. It should be different than 0.0 in order to avoid instability */
	double max_sleep; /*!< The minimum allowed sleep duration*/
	int mobility_type; /*!< The chosen mobility model for the nodes in question. It should be one of the types inumarated as #mobility_types*/
	int nodes_type; /*!< The type of the nodes in question. It should be one of the types inumarated as #node_types */
  	int seed; /*!< The seed used to generate the random positions*/
	char* mobility_file; /*!< The mobility file name */
}omg_global_param; 

/* PROTOTYPES */


/**
 * \fn void update_node_vector(int mobility_type, double cur_time)
 * \brief According to the mobility type, call the corresponding update function 
 * \param mobility_type an integer that represents the mobility model name
 * \param cur_time a variable of type double that represents the current time
 */
void update_node_vector(int mobility_type, double cur_time);

/**
 * \fn NodePtr get_node_position(int node_type, int nID)
 * \brief According to the node type and ID, look for the corresponding updated position and display it
 * \param node_type an integer that represents the node type (UE, eNB, etc.)
 * \param nID a variable of type int that represents the specific node's ID
 * \return a NodePtr structure that stores the updated information about the specific node ((X,Y) coordinates), speed, etc.)
 */
NodePtr get_node_position(int node_type, int nID);


/**
 * \fn Node_list add_entry(NodePtr node, Node_list Node_Vector)
 * \brief Add the Node sructure to the specified Node_Vector
 * \param node a pointer to the node that should be added to the Node_Vector 
 * \param Node_Vector a pointer of type Node_list that represents the Node_Vector storing all the nodes of the specified mobility type
 * \return the Node_list to which a new entry is added
 */
Node_list add_entry(NodePtr node, Node_list Node_Vector);

/**
 * \fn void display_node_list(Node_list Node_Vector)
 * \brief Display the useful informaion about the specified Node_list (for instance the nodes IDs, their types (UE, eNB, etc.), their corresponding mobility models, their status (moving, sleeping) and  their current positions)
 * \param Node_Vector a pointer of type Node_list that represents the Node_list to be dispalyed
 */
void display_node_list(Node_list Node_Vector);


/**
 * \fn Node_list remove_node(Node_list list, int nID, int node_type)
 * \brief Remove a given node, identified by its ID and type, from the specified Node_list
 * \param list a pointer of type Node_list that represents the Node_Vector from which the element is to be removed
 * \param nID an int that represents the ID of the node to be removed 
 * \param node_type an int that represents the type of the node to be removed from the Node_list
 * \return a pointer to the Node_list from which a new entry is removed
 */
Node_list remove_node(Node_list list, int nID, int node_type);


/**
 * \fn void display_node_position(int ID, int generator, int type, int mobile, double X, double Y)
 * \brief Display information about the node identified by the parameters passed as arguments 
 * \param ID the node's ID
 * \param generator the node's mobility type
 * \param type the node's type 
 * \param mobile the node's status (moving or sleeping)
 * \param X the node's current location according to the X axis 
 * \param Y the node's current location according to the Y axis
 */
void display_node_position(int ID, int generator, int type, int mobile, double X, double Y);


/**
 * \fn Node_list filter(Node_list Vector, int node_type)
 * \brief Filter the content of the specified Node_list in order to return only the nodes whose type is the one passed as argument
 * \param Vector a pointer of type Node_list that represents the Node_Vector to be filtered
 * \param node_type the desired type 
 * \return a pointer to a new Node_list which is the input Node_list after filtering 
 */
Node_list filter(Node_list Vector, int node_type);


/**
 * \fn double randomGen(double a, double b)
 * \brief Generate a random number in the range [a, b] and of type double 
 * \param a lower limit
 * \param b upper limit
 * \return double: the generated random number
 */
double randomGen(double a, double b);


/**
 * \fn NodePtr create_node(void)
 * \brief Creates a new #NodePtr by allocating the needed memory space for it 
 * \return the created node structure
 */
NodePtr create_node(void);


/**
 * \fn MobilityPtr create_mobility(void)
 * \brief Creates a new #MobilityPtr by allocating the needed memory space for it 
 * \return the created mobility structure
 */
MobilityPtr create_mobility(void);


/**
 * \fn Job_list add_job(Pair job, Job_list Job_Vector)
 * \brief adds a new job to the Job_list
 * \param job a variable of type #Pair that represents the new job
 * \param Job_Vector a variable #Job_list that represents the Job_list that stores all the scheduled jobs
 * \return the created mobility structure
 */
Job_list add_job(Pair job, Job_list Job_Vector);


/**
 * \fn void display_job_list(Job_list Job_Vector)
 * \brief Traverse the Job_Vector to diplay its contents
 * \param Job_Vector the structure that stoks all the jobs
 */
void display_job_list(Job_list Job_Vector);


/**
 * \fn Job_list job_list_sort (Job_list list, Job_list end)
 * \brief Called by the function Job_list quick_sort (Job_list list), it executes the quick sort
 * \param list the Job_list to be sorted
 * \param end Job_list needed for intermediate computation
 * \return a Job_list that is used by Job_list quick_sort (Job_list list) to perform the sort operation
 */
Job_list job_list_sort (Job_list list, Job_list end);


/**
 * \fn Job_list quick_sort (Job_list list)
 * \brief Apply a quicksort to sort the list contents
 * \param list the structure that stoks all the jobs
 * \return the sorted list
 */
Job_list quick_sort (Job_list list);


/**
 * \fn Job_list remove_job(Job_list list, int nID, int node_type)
 * \brief Look for the node idenitied by the ID and type passed as arguments and the remove its corresponding job from the #Job_list list
 * \param list the Job_list from which the job is to be removed
 * \param nID the ID of the node whose job should be removed
 * \param node_type the type of the node whose job should be removed
 * \return the updated Job_list after removing the job in question 
 */
Job_list remove_job(Job_list list, int nID, int node_type);


/**
 * \fn void usage()
 * \brief Define the arguments that can be used in the STAND_ALONE method to launch the OMG generator (mainly for test and debug purpose)
  */
void usage(void);
#endif /*  __DEFS_H__ */
