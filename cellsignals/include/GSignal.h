/*
 * Copyright (C) Sandra Sáez Raspeño - All Rights Reserved
 *
 *
 * All information contained in this package is, and remains the property of
 * Sandra Sáez Raspeño. Copy and distribution of CellSignals or any result
 * generated by it is strictly forbidden unless prior written permission is
 * obtained from Sandra Sáez Raspeño.
 */

/**********************************************************************/
/*                                                                    */
/*                    SIGNAL CLASS DEFINITION                         */
/*                                                                    */
/**********************************************************************/

#include <vector>
using namespace std;

class GSignal {
 protected:
  int id;
  double kdiff;
  double kdeg;
  std::vector<std::vector<float> > matrix;
  int cycles;

 public:
 GSignal(int id, double diff, double deg, std::vector<std::vector<float>> mdiff, int cycles=1): id(id), kdiff(diff), kdeg(deg), matrix(mdiff), cycles(cycles) {};
  
  
 /******************** Getters and Setters ****************************/
  
  inline int get_id() {
    return this->id;
  }

  inline double get_kdiff() {
    return this->kdiff;
  }

  inline double get_kdeg() {
    return this->kdeg;
  }

  inline std::vector<std::vector<float> > get_Matrix() {
    return this->matrix;
  }

  inline int get_cycles() {
    return this->cycles;
  }
  
  inline void set_kdiff(double newKdiff) {
    this->kdiff = newKdiff;
  }

  inline void set_kdeg(double newKdeg) {
    this->kdeg = newKdeg;
  }

  inline void set_Matrix(std::vector<std::vector<float> > newMatrix) {
    this->matrix = newMatrix;
  }

  inline void set_cycles(int newCycles) {
    this->cycles = newCycles;
  }

  /********************* Operator overrinding ************************/
  
  inline bool operator==(const GSignal& s2) const {
    return this->id == s2.id;
}
};
