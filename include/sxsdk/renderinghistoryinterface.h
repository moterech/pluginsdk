#pragma once

namespace sxsdk {
	class rendering_history_interface : public shade_interface {
	public:
		virtual ~rendering_history_interface () { }
#pragma clang diagnostics push
#pragma clang diagnostic ignored "-Wold-style-cast"
	virtual rendering_history_interface &set_enabled (bool enabled_param, void* = nullptr) = 0; // 0
	virtual bool get_enabled (void* = nullptr) const = 0; // 1
#pragma clang diagnostics pop
	};
}
