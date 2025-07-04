#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class XPathResult;
class Node;


class XPathExpression : public emlite::Val {
    explicit XPathExpression(Handle h) noexcept;

public:
    explicit XPathExpression(const emlite::Val &val) noexcept;
    static XPathExpression take_ownership(Handle h) noexcept;

    XPathExpression clone() const noexcept;
    XPathResult evaluate(const Node& contextNode, unsigned short type, const XPathResult& result);
};

