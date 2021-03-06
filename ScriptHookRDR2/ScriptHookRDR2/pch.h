#ifndef PCH_H
#define PCH_H

#include "framework.h"

#include "src/rage/scrThread.hpp"
#include "src/rage/fwBasePool.hpp"
#include "src/rage/eGameVersion.hpp"

#include "src/log.hpp"
#include "src/core.hpp"
#include "src/scan.hpp"
#include "src/detour.hpp"

namespace globalvars
{
	inline HMODULE g_Module{};
	inline bool g_Running = true;
	inline std::unique_ptr<Core> g_CoreInstance{};
	inline std::unique_ptr<Log> g_LogInstance{};

	typedef void (*KeyboardHandler)(DWORD key,
		WORD  repeats,
		BYTE  scanCode,
		BOOL  isExtended,
		BOOL  isWithAlt,
		BOOL  wasDownBefore,
		BOOL  isUpNow);
}

#endif //PCH_H
