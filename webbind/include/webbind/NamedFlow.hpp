#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "EventTarget.hpp"
#include "enums.hpp"

class Element;
class Node;


class NamedFlow : public EventTarget {
    explicit NamedFlow(Handle h) noexcept;

public:
    explicit NamedFlow(const emlite::Val &val) noexcept;
    static NamedFlow take_ownership(Handle h) noexcept;

    NamedFlow clone() const noexcept;
    jsbind::CSSOMString name() const;
    bool overset() const;
    jsbind::Sequence<Element> getRegions();
    short firstEmptyRegionIndex() const;
    jsbind::Sequence<Node> getContent();
    jsbind::Sequence<Element> getRegionsByContent(const Node& node);
};

