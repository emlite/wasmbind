#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class XPathResult;
class Node;


/// The XPathExpression class.
/// [`XPathExpression`](https://developer.mozilla.org/en-US/docs/Web/API/XPathExpression)
class XPathExpression : public emlite::Val {
    explicit XPathExpression(Handle h) noexcept;

public:
    explicit XPathExpression(const emlite::Val &val) noexcept;
    static XPathExpression take_ownership(Handle h) noexcept;

    [[nodiscard]] XPathExpression clone() const noexcept;
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

