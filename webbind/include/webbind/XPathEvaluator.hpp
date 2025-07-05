#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class XPathExpression;
class Node;
class XPathResult;


class XPathEvaluator : public emlite::Val {
    explicit XPathEvaluator(Handle h) noexcept;

public:
    explicit XPathEvaluator(const emlite::Val &val) noexcept;
    static XPathEvaluator take_ownership(Handle h) noexcept;

    XPathEvaluator clone() const noexcept;
    XPathEvaluator();
    XPathExpression createExpression(const jsbind::DOMString& expression);
    XPathExpression createExpression(const jsbind::DOMString& expression, const jsbind::Function& resolver);
    Node createNSResolver(const Node& nodeResolver);
    XPathResult evaluate(const jsbind::DOMString& expression, const Node& contextNode);
    XPathResult evaluate(const jsbind::DOMString& expression, const Node& contextNode, const jsbind::Function& resolver);
    XPathResult evaluate(const jsbind::DOMString& expression, const Node& contextNode, const jsbind::Function& resolver, unsigned short type);
    XPathResult evaluate(const jsbind::DOMString& expression, const Node& contextNode, const jsbind::Function& resolver, unsigned short type, const XPathResult& result);
};

