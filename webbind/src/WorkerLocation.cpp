#include <webbind/WorkerLocation.hpp>


WorkerLocation WorkerLocation::take_ownership(Handle h) noexcept {
        return WorkerLocation(h);
    }
WorkerLocation WorkerLocation::clone() const noexcept { return *this; }
WorkerLocation::WorkerLocation(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
WorkerLocation::WorkerLocation(const emlite::Val &val) noexcept: emlite::Val(val) {}


jsbind::USVString WorkerLocation::href() const {
    return emlite::Val::get("href").as<jsbind::USVString>();
}

jsbind::USVString WorkerLocation::origin() const {
    return emlite::Val::get("origin").as<jsbind::USVString>();
}

jsbind::USVString WorkerLocation::protocol() const {
    return emlite::Val::get("protocol").as<jsbind::USVString>();
}

jsbind::USVString WorkerLocation::host() const {
    return emlite::Val::get("host").as<jsbind::USVString>();
}

jsbind::USVString WorkerLocation::hostname() const {
    return emlite::Val::get("hostname").as<jsbind::USVString>();
}

jsbind::USVString WorkerLocation::port() const {
    return emlite::Val::get("port").as<jsbind::USVString>();
}

jsbind::USVString WorkerLocation::pathname() const {
    return emlite::Val::get("pathname").as<jsbind::USVString>();
}

jsbind::USVString WorkerLocation::search() const {
    return emlite::Val::get("search").as<jsbind::USVString>();
}

jsbind::USVString WorkerLocation::hash() const {
    return emlite::Val::get("hash").as<jsbind::USVString>();
}

