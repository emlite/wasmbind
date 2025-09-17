#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class XPathExpression;
class XPathNSResolver;
class Node;
class XPathResult;

/// Interface XPathEvaluator
/// [`XPathEvaluator`](https://developer.mozilla.org/en-US/docs/Web/API/XPathEvaluator)
class XPathEvaluator : public emlite::Val {
    explicit XPathEvaluator(Handle h) noexcept;
public:
    explicit XPathEvaluator(const emlite::Val &val) noexcept;
    static XPathEvaluator take_ownership(Handle h) noexcept;
    [[nodiscard]] XPathEvaluator clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new XPathEvaluator(..)` constructor, creating a new XPathEvaluator instance
    XPathEvaluator();
    /// The createExpression method.
    /// [`XPathEvaluator.createExpression`](https://developer.mozilla.org/en-US/docs/Web/API/XPathEvaluator/createExpression)
    XPathExpression createExpression(const jsbind::String& expression);
    /// The createExpression method.
    /// [`XPathEvaluator.createExpression`](https://developer.mozilla.org/en-US/docs/Web/API/XPathEvaluator/createExpression)
    XPathExpression createExpression(const jsbind::String& expression, const XPathNSResolver& resolver);
    /// The createNSResolver method.
    /// [`XPathEvaluator.createNSResolver`](https://developer.mozilla.org/en-US/docs/Web/API/XPathEvaluator/createNSResolver)
    Node createNSResolver(const Node& nodeResolver);
    /// The evaluate method.
    /// [`XPathEvaluator.evaluate`](https://developer.mozilla.org/en-US/docs/Web/API/XPathEvaluator/evaluate)
    XPathResult evaluate(const jsbind::String& expression, const Node& contextNode);
    /// The evaluate method.
    /// [`XPathEvaluator.evaluate`](https://developer.mozilla.org/en-US/docs/Web/API/XPathEvaluator/evaluate)
    XPathResult evaluate(const jsbind::String& expression, const Node& contextNode, const XPathNSResolver& resolver);
    /// The evaluate method.
    /// [`XPathEvaluator.evaluate`](https://developer.mozilla.org/en-US/docs/Web/API/XPathEvaluator/evaluate)
    XPathResult evaluate(const jsbind::String& expression, const Node& contextNode, const XPathNSResolver& resolver, unsigned short type);
    /// The evaluate method.
    /// [`XPathEvaluator.evaluate`](https://developer.mozilla.org/en-US/docs/Web/API/XPathEvaluator/evaluate)
    XPathResult evaluate(const jsbind::String& expression, const Node& contextNode, const XPathNSResolver& resolver, unsigned short type, const XPathResult& result);
};

} // namespace webbind