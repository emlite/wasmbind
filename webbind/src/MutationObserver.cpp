#include <webbind/MutationObserver.hpp>
#include <webbind/Node.hpp>
#include <webbind/MutationObserverInit.hpp>
#include <webbind/MutationRecord.hpp>

namespace webbind {

MutationObserver MutationObserver::take_ownership(Handle h) noexcept {
        return MutationObserver(h);
    }
MutationObserver MutationObserver::clone() const noexcept { return *this; }
emlite::Val MutationObserver::instance() noexcept { return emlite::Val::global("MutationObserver"); }
MutationObserver::MutationObserver(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
MutationObserver::MutationObserver(const emlite::Val &val) noexcept: emlite::Val(val) {}

MutationObserver::MutationObserver(const jsbind::Function& callback) : emlite::Val(emlite::Val::global("MutationObserver").new_(callback)) {}

jsbind::Undefined MutationObserver::observe(const Node& target) {
    return emlite::Val::call("observe", target).as<jsbind::Undefined>();
}

jsbind::Undefined MutationObserver::observe(const Node& target, const MutationObserverInit& options) {
    return emlite::Val::call("observe", target, options).as<jsbind::Undefined>();
}

jsbind::Undefined MutationObserver::disconnect() {
    return emlite::Val::call("disconnect").as<jsbind::Undefined>();
}

jsbind::TypedArray<MutationRecord> MutationObserver::takeRecords() {
    return emlite::Val::call("takeRecords").as<jsbind::TypedArray<MutationRecord>>();
}


} // namespace webbind