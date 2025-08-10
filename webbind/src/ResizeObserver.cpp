#include "webbind/ResizeObserver.hpp"
#include "webbind/Element.hpp"
#include "webbind/ResizeObserverOptions.hpp"

namespace webbind {

ResizeObserver ResizeObserver::take_ownership(Handle h) noexcept {
        return ResizeObserver(h);
    }
ResizeObserver ResizeObserver::clone() const noexcept { return *this; }
emlite::Val ResizeObserver::instance() noexcept { return emlite::Val::global("ResizeObserver"); }
ResizeObserver::ResizeObserver(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
ResizeObserver::ResizeObserver(const emlite::Val &val) noexcept: emlite::Val(val) {}

ResizeObserver::ResizeObserver(const jsbind::Function& callback) : emlite::Val(emlite::Val::global("ResizeObserver").new_(callback)) {}

jsbind::Undefined ResizeObserver::observe(const Element& target) {
    return emlite::Val::call("observe", target).as<jsbind::Undefined>();
}

jsbind::Undefined ResizeObserver::observe(const Element& target, const ResizeObserverOptions& options) {
    return emlite::Val::call("observe", target, options).as<jsbind::Undefined>();
}

jsbind::Undefined ResizeObserver::unobserve(const Element& target) {
    return emlite::Val::call("unobserve", target).as<jsbind::Undefined>();
}

jsbind::Undefined ResizeObserver::disconnect() {
    return emlite::Val::call("disconnect").as<jsbind::Undefined>();
}


} // namespace webbind