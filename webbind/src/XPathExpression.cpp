#include <webbind/XPathExpression.hpp>
#include <webbind/XPathResult.hpp>
#include <webbind/Node.hpp>

namespace webbind {

XPathExpression XPathExpression::take_ownership(Handle h) noexcept {
    return XPathExpression(h);
}

XPathExpression XPathExpression::clone() const noexcept { return *this; }

emlite::Val XPathExpression::instance() noexcept { return emlite::Val::global("XPathExpression"); }

XPathExpression::XPathExpression(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}

XPathExpression::XPathExpression(const emlite::Val &val) noexcept: emlite::Val(val) {}

XPathResult XPathExpression::evaluate(const Node& contextNode) {
    return emlite::Val::call("evaluate", contextNode).as<XPathResult>();
}

XPathResult XPathExpression::evaluate(const Node& contextNode, unsigned short type) {
    return emlite::Val::call("evaluate", contextNode, type).as<XPathResult>();
}

XPathResult XPathExpression::evaluate(const Node& contextNode, unsigned short type, const XPathResult& result) {
    return emlite::Val::call("evaluate", contextNode, type, result).as<XPathResult>();
}


} // namespace webbind