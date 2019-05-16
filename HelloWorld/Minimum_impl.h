/*
 * Minimum_impl.h
 *
 *  Created on: 2019¦~3¤ë7¤é
 *      Author: misclicked
 */

#ifndef MINIMUM_IMPL_H_
#define MINIMUM_IMPL_H_

template<class T>
T Minimum(T a,T b){
	return a>b?b:a;
}
template<class T, typename ... Args>
T Minimum(T a, Args ... args){
	return Minimum(a, Minimum(args...));
}

#endif /* MINIMUM_IMPL_H_ */
