#include <webbind/NodeFilter.hpp>
#include <webbind/Node.hpp>

namespace webbind {

NodeFilter NodeFilter::take_ownership(Handle h) noexcept {
    return NodeFilter(h);
}

NodeFilter NodeFilter::clone() const noexcept { return *this; }

NodeFilter::NodeFilter(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}

NodeFilter::NodeFilter(const emlite::Val &val) noexcept: emlite::Val(val) {}

NodeFilter::NodeFilter(const jsbind::Function &fn) noexcept : emlite::Val(fn) {}

NodeFilter::NodeFilter(const jsbind::Function::Fn<unsigned short(Node)> &fn) noexcept : emlite::Val(static_cast<jsbind::Function>(fn)) {}

unsigned short NodeFilter::acceptNode(const Node& node) const {
    if (is_function()) {
        return jsbind::Function(*this)(node).as<unsigned short>();
    }
    return emlite::Val::call("acceptNode", node).as<unsigned short>();
}


} // namespace webbind