#include "ml_connect.h"
#include <memory>  // shared_ptr

int start_ml_session() {
	std::unique_ptr<matlab::engine::MATLABEngine> pml = matlab::engine::startMATLAB();
	const std::shared_ptr<matlab::engine::StreamBuffer> output {};
	const std::shared_ptr<matlab::engine::StreamBuffer> error {};

	pml->eval(u"a=sqrt(12.7)",output,error);

	//u"a = sqrt(12.7);"

	return 0;
}



