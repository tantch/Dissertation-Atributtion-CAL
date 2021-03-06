/*
 * ProjResp.h
 *
 *  Created on: Apr 25, 2014
 *      Author: pim
 */

#ifndef PROJRESP_H_
#define PROJRESP_H_

#include "People.h"

class ProjResp: public People {
	string projName;
public:
	ProjResp(int id, string name, string projName, vector<int> prefOrder,
			vector<int> prefPrio);
	virtual ~ProjResp();

	string print(){
		string str = "Project: " + getName();
		return str;

			}
};

#endif /* PROJRESP_H_ */
