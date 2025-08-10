#include "webbind/XPathEvaluator.hpp"
#include "webbind/XPathExpression.hpp"
#include "webbind/Node.hpp"
#include "webbind/XPathResult.hpp"

namespace webbind {

XPathEvaluator XPathEvaluator::take_ownership(Handle h) noexcept {
        return XPathEvaluator(h);
    }
XPathEvaluator XPathEvaluator::clone() const noexcept { return *this; }
emlite::Val XPathEvaluator::instance() noexcept { return emlite::Val::global("XPathEvaluator"); }
XPathEvaluator::XPathEvaluator(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
XPathEvaluator::XPathEvaluator(const emlite::Val &val) noexcept: emlite::Val(val) {}

XPathEvaluator::XPathEvaluator() : emlite::Val(emlite::Val::global("XPathEvaluator").new_()) {}

XPathExpression XPathEvaluator::createExpression(const jsbind::String& expression) {
    return emlite::Val::call("createExpression", expression).as<XPathExpression>();
}

XPathExpression XPathEvaluator::createExpression(const jsbind::String& expression, const jsbind::Function& resolver) {
    return emlite::Val::call("createExpression", expression, resolver).as<XPathExpression>();
}

Node XPathEvaluator::createNSResolver(const Node& nodeResolver) {
    return emlite::Val::call("createNSResolver", nodeResolver).as<Node>();
}

XPathResult XPathEvaluator::evaluate(const jsbind::String& expression, const Node& contextNode) {
    return emlite::Val::call("evaluate", expression, contextNode).as<XPathResult>();
}

XPathResult XPathEvaluator::evaluate(const jsbind::String& expression, const Node& contextNode, const jsbind::Function& resolver) {
    return emlite::Val::call("evaluate", expression, contextNode, resolver).as<XPathResult>();
}

XPathResult XPathEvaluator::evaluate(const jsbind::String& expression, const Node& contextNode, const jsbind::Function& resolver, unsigned short type) {
    return emlite::Val::call("evaluate", expression, contextNode, resolver, type).as<XPathResult>();
}

XPathResult XPathEvaluator::evaluate(const jsbind::String& expression, const Node& contextNode, const jsbind::Function& resolver, unsigned short type, const XPathResult& result) {
    return emlite::Val::call("evaluate", expression, contextNode, resolver, type, result).as<XPathResult>();
}


} // namespace webbind