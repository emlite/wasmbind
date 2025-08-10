#include <webbind/WorkerLocation.hpp>

namespace webbind {

WorkerLocation WorkerLocation::take_ownership(Handle h) noexcept {
        return WorkerLocation(h);
    }
WorkerLocation WorkerLocation::clone() const noexcept { return *this; }
emlite::Val WorkerLocation::instance() noexcept { return emlite::Val::global("WorkerLocation"); }
WorkerLocation::WorkerLocation(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
WorkerLocation::WorkerLocation(const emlite::Val &val) noexcept: emlite::Val(val) {}

jsbind::String WorkerLocation::href() const {
    return emlite::Val::get("href").as<jsbind::String>();
}

jsbind::String WorkerLocation::origin() const {
    return emlite::Val::get("origin").as<jsbind::String>();
}

jsbind::String WorkerLocation::protocol() const {
    return emlite::Val::get("protocol").as<jsbind::String>();
}

jsbind::String WorkerLocation::host() const {
    return emlite::Val::get("host").as<jsbind::String>();
}

jsbind::String WorkerLocation::hostname() const {
    return emlite::Val::get("hostname").as<jsbind::String>();
}

jsbind::String WorkerLocation::port() const {
    return emlite::Val::get("port").as<jsbind::String>();
}

jsbind::String WorkerLocation::pathname() const {
    return emlite::Val::get("pathname").as<jsbind::String>();
}

jsbind::String WorkerLocation::search() const {
    return emlite::Val::get("search").as<jsbind::String>();
}

jsbind::String WorkerLocation::hash() const {
    return emlite::Val::get("hash").as<jsbind::String>();
}


} // namespace webbind