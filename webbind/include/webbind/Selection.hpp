#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class Node;
class Range;
class StaticRange;
class GetComposedRangesOptions;
class ShadowRoot;


class GetComposedRangesOptions : public emlite::Val {
  explicit GetComposedRangesOptions(Handle h) noexcept;
public:
    static GetComposedRangesOptions take_ownership(Handle h) noexcept;
    explicit GetComposedRangesOptions(const emlite::Val &val) noexcept;
    GetComposedRangesOptions() noexcept;
    GetComposedRangesOptions clone() const noexcept;
    jsbind::TypedArray<ShadowRoot> shadowRoots() const;
    void shadowRoots(const jsbind::TypedArray<ShadowRoot>& value);
};

class Selection : public emlite::Val {
    explicit Selection(Handle h) noexcept;

public:
    explicit Selection(const emlite::Val &val) noexcept;
    static Selection take_ownership(Handle h) noexcept;

    Selection clone() const noexcept;
    Node anchorNode() const;
    unsigned long anchorOffset() const;
    Node focusNode() const;
    unsigned long focusOffset() const;
    bool isCollapsed() const;
    unsigned long rangeCount() const;
    jsbind::String type() const;
    jsbind::String direction() const;
    Range getRangeAt(unsigned long index);
    jsbind::Undefined addRange(const Range& range);
    jsbind::Undefined removeRange(const Range& range);
    jsbind::Undefined removeAllRanges();
    jsbind::Undefined empty();
    jsbind::TypedArray<StaticRange> getComposedRanges();
    jsbind::TypedArray<StaticRange> getComposedRanges(const GetComposedRangesOptions& options);
    jsbind::Undefined collapse(const Node& node);
    jsbind::Undefined collapse(const Node& node, unsigned long offset);
    jsbind::Undefined setPosition(const Node& node);
    jsbind::Undefined setPosition(const Node& node, unsigned long offset);
    jsbind::Undefined collapseToStart();
    jsbind::Undefined collapseToEnd();
    jsbind::Undefined extend(const Node& node);
    jsbind::Undefined extend(const Node& node, unsigned long offset);
    jsbind::Undefined setBaseAndExtent(const Node& anchorNode, unsigned long anchorOffset, const Node& focusNode, unsigned long focusOffset);
    jsbind::Undefined selectAllChildren(const Node& node);
    jsbind::Undefined modify();
    jsbind::Undefined modify(const jsbind::String& alter);
    jsbind::Undefined modify(const jsbind::String& alter, const jsbind::String& direction);
    jsbind::Undefined modify(const jsbind::String& alter, const jsbind::String& direction, const jsbind::String& granularity);
    jsbind::Undefined deleteFromDocument();
    bool containsNode(const Node& node);
    bool containsNode(const Node& node, bool allowPartialContainment);
};

