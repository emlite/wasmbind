#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class XPathResult;
class Node;

/// Interface XPathExpression
/// [`XPathExpression`](https://developer.mozilla.org/en-US/docs/Web/API/XPathExpression)
class XPathExpression : public emlite::Val {
    explicit XPathExpression(Handle h) noexcept;
public:
    explicit XPathExpression(const emlite::Val &val) noexcept;
    static XPathExpression take_ownership(Handle h) noexcept;
    [[nodiscard]] XPathExpression clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The evaluate method.
    /// [`XPathExpression.evaluate`](https://developer.mozilla.org/en-US/docs/Web/API/XPathExpression/evaluate)
    XPathResult evaluate(const Node& contextNode);
    /// The evaluate method.
    /// [`XPathExpression.evaluate`](https://developer.mozilla.org/en-US/docs/Web/API/XPathExpression/evaluate)
    XPathResult evaluate(const Node& contextNode, unsigned short type);
    /// The evaluate method.
    /// [`XPathExpression.evaluate`](https://developer.mozilla.org/en-US/docs/Web/API/XPathExpression/evaluate)
    XPathResult evaluate(const Node& contextNode, unsigned short type, const XPathResult& result);
};

} // namespace webbind