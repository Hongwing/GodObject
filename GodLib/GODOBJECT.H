/*******************************************************
*******
******* Author: HenryHE
******* Date: 2017-11-09
******* Description: Print the info of any Class which oriented the GodObject 
*******
********************************************************/



/**
* GodObject
*/
template <class T>
class GodObject {
public:
	static void Description(void) {
		cout<<"Class Description: { "<<typeid(T).name()<<" }"<<endl;
	}
};