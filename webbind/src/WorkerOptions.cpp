#include <webbind/WorkerOptions.hpp>

namespace webbind {

WorkerOptions::WorkerOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
WorkerOptions WorkerOptions::take_ownership(Handle h) noexcept {
    return WorkerOptions(h);
}

WorkerOptions::WorkerOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}

WorkerOptions::WorkerOptions() noexcept: emlite::Val(emlite::Val::object()) {}

WorkerOptions WorkerOptions::clone() const noexcept { return *this; }

WorkerType WorkerOptions::type() const {
    return emlite::Val::get("type").as<WorkerType>();
}

void WorkerOptions::type(const WorkerType& value) {
    emlite::Val::set("type", value);
}

RequestCredentials WorkerOptions::credentials() const {
    return emlite::Val::get("credentials").as<RequestCredentials>();
}

void WorkerOptions::credentials(const RequestCredentials& value) {
    emlite::Val::set("credentials", value);
}

jsbind::String WorkerOptions::name() const {
    return emlite::Val::get("name").as<jsbind::String>();
}

void WorkerOptions::name(const jsbind::String& value) {
    emlite::Val::set("name", value);
}


} // namespace webbind