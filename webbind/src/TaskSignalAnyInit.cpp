#include <webbind/TaskSignalAnyInit.hpp>

namespace webbind {

TaskSignalAnyInit::TaskSignalAnyInit(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
TaskSignalAnyInit TaskSignalAnyInit::take_ownership(Handle h) noexcept {
    return TaskSignalAnyInit(h);
}

TaskSignalAnyInit::TaskSignalAnyInit(const emlite::Val &val) noexcept: emlite::Val(val) {}

TaskSignalAnyInit::TaskSignalAnyInit() noexcept: emlite::Val(emlite::Val::object()) {}

TaskSignalAnyInit TaskSignalAnyInit::clone() const noexcept { return *this; }

jsbind::Any TaskSignalAnyInit::priority() const {
    return emlite::Val::get("priority").as<jsbind::Any>();
}

void TaskSignalAnyInit::priority(const jsbind::Any& value) {
    emlite::Val::set("priority", value);
}


} // namespace webbind