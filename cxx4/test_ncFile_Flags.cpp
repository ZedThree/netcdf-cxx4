/*! Test that C++ library can access NC_SHARE, other flags.
  Copyright Unidata 2018
  @author wfisher
*/
#include <iostream>
#include <string>
#include <netcdf>
#include "test_utilities.h"

using namespace std;
using namespace netCDF;
using namespace netCDF::exceptions;

/*! Standard 'main' function'.
 *
 */
int main() {


  NcFile file;

  /* Test opening a new file. */
  cout << "Creating file...";
  try {
    file.open("test_ncFile_Flags_newFile.nc",NC_NETCDF4 | NC_NOCLOBBER);
    cout << "Success." << endl;
  } catch (NcException &e) {
    cout << "Caught unexpected exception." << endl;
    return e.errorCode();
  }

  /* Test closing the file. */
  cout << "Closing file...";
  try {
    file.close();
    cout << "Success." << endl;
  } catch (NcException &e) {
    cout << "Caught unexpected exception." << endl;
    return e.errorCode();
  }

  cout << endl << "Finished." << endl;
  return 0;

}
