#include "stdafx.h"
#include "KnProcFilterManager.h"


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
std::tr1::shared_ptr<KnProcFilterManager> KnProcFilterManager::_Instance;


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
KnProcFilterManager::KnProcFilterManager()
{
}


KnProcFilterManager::~KnProcFilterManager()
{
}


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
KnProcFilterManager& KnProcFilterManager::GetInstance(void)
{
	if (_Instance.get() == nullptr)
	{
		_Instance.reset(new (std::nothrow) KnProcFilterManager);
	}

	return *_Instance.get();
}


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////