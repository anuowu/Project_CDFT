/* 
 * File:   parameter.h
 * Author: WEI CHEN
 *
 * Created on Mar 7, 2013
 */

#ifndef PARAMETER_H
#define	PARAMETER_H 
#define NUM_PARAMETER 9

typedef double real;
typedef double complex real_complex;

/* Default settings, allows for models with over 2B sites, 32-bit smallint, 64-bit bigint*/
/* MPI_BIGINT = MPI data type corresponding to a bigint*/

typedef long int bigint;


 struct Vector 
{
	real x;
	real y;
	real z;
};
//a three-dimensional vector
//quantity with floating-point components

 struct VectorInt
{
	int x;
	int y;
	int z;
};

 struct VectorComplex
{
	real_complex x;
	real_complex y;
	real_complex z;
};


 struct PropertyAtom
{
     real mass;
	 real charge;
	 real sigma;
	 real epslion;
};

 
 extern struct PropertyMol * Atom;
 
 extern int NumAtom;
 
 extern real Temperature;
 
 extern real Beta;

 extern const real Kb; //Boltzmann constant, unit in kJ / K

 extern const real Na; //Avogradro constant, unit in mol^-1

 extern const real Eps; //The vacuum permittivity, unit in F/m (farads per metre)

 extern const real Q; //The elementary charge, usually denoted as e or sometimes q, is the electric charge carried by a single proton, or equivalently, the magnitude of the electric charge carried by a single electron, which has charge -e. Unit in coulombs.

 extern real Rcut; // cutoff for LJ attraction

 extern struct Vextor Size;

 extern real * ThermWaveLength; //The thermal wavelenght "Lambda" = (beta * h * h / (2.0 * Pi * mass))

 extern struct VectorInt Pts; // Discretize the space into a given number of grid points, pts[0] is X dirextion, pts[1] is Y dirextion, pts[2] is Z dirextion

 extern real * Delta; //The distance between two grid nodes
 
 extern int AtomType; // 0 is HS, 1 is LJ

 extern int HS_size_approximation; 
 /*
	approximation for estimating effective HS size
   0 BH :   Baker-Handerson method
   1 WCA:   Weitheim-Chandler-Anderson method
   2 OCB:   Oxtoby
	*/

 extern int Approx_excess_free_energy;

/*
   	approximation for attractive excess helmholtz free energy
   0 MSA:  Mean Spherical Approximation
   1 FMSA: First order Mean Spherical Approximation
   2 MFA: Mean field approximation

    reasonable combination:
    BH  + MFA
    BH  + FMSA
 */
 
 
 extern NameList nameList[NUM_PARAMETER];

#endif	/* PARAMETER_H */
