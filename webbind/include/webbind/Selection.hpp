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
    [[nodiscard]] GetComposedRangesOptions clone() const noexcept;
    [[nodiscard]] jsbind::TypedArray<ShadowRoot> shadowRoots() const;
    void shadowRoots(const jsbind::TypedArray<ShadowRoot>& value);
};

/// The Selection class.
/// [`Selection`](https://developer.mozilla.org/en-US/docs/Web/API/Selection)
class Selection : public emlite::Val {
    explicit Selection(Handle h) noexcept;

public:
    explicit Selection(const emlite::Val &val) noexcept;
    static Selection take_ownership(Handle h) noexcept;

    [[nodiscard]] Selection clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// Getter of the `anchorNode` attribute.
    /// [`Selection.anchorNode`](https://developer.mozilla.org/en-US/docs/Web/API/Selection/anchorNode)
    [[nodiscard]] Node anchorNode() const;
    /// Getter of the `anchorOffset` attribute.
    /// [`Selection.anchorOffset`](https://developer.mozilla.org/en-US/docs/Web/API/Selection/anchorOffset)
    [[nodiscard]] unsigned long anchorOffset() const;
    /// Getter of the `focusNode` attribute.
    /// [`Selection.focusNode`](https://developer.mozilla.org/en-US/docs/Web/API/Selection/focusNode)
    [[nodiscard]] Node focusNode() const;
    /// Getter of the `focusOffset` attribute.
    /// [`Selection.focusOffset`](https://developer.mozilla.org/en-US/docs/Web/API/Selection/focusOffset)
    [[nodiscard]] unsigned long focusOffset() const;
    /// Getter of the `isCollapsed` attribute.
    /// [`Selection.isCollapsed`](https://developer.mozilla.org/en-US/docs/Web/API/Selection/isCollapsed)
    [[nodiscard]] bool isCollapsed() const;
    /// Getter of the `rangeCount` attribute.
    /// [`Selection.rangeCount`](https://developer.mozilla.org/en-US/docs/Web/API/Selection/rangeCount)
    [[nodiscard]] unsigned long rangeCount() const;
    /// Getter of the `type` attribute.
    /// [`Selection.type`](https://developer.mozilla.org/en-US/docs/Web/API/Selection/type)
    [[nodiscard]] jsbind::String type() const;
    /// Getter of the `direction` attribute.
    /// [`Selection.direction`](https://developer.mozilla.org/en-US/docs/Web/API/Selection/direction)
    [[nodiscard]] jsbind::String direction() const;
    /// The getRangeAt method.
    /// [`Selection.getRangeAt`](https://developer.mozilla.org/en-US/docs/Web/API/Selection/getRangeAt)
    Range getRangeAt(unsigned long index);
    /// The addRange method.
    /// [`Selection.addRange`](https://developer.mozilla.org/en-US/docs/Web/API/Selection/addRange)
    jsbind::Undefined addRange(const Range& range);
    /// The removeRange method.
    /// [`Selection.removeRange`](https://developer.mozilla.org/en-US/docs/Web/API/Selection/removeRange)
    jsbind::Undefined removeRange(const Range& range);
    /// The removeAllRanges method.
    /// [`Selection.removeAllRanges`](https://developer.mozilla.org/en-US/docs/Web/API/Selection/removeAllRanges)
    jsbind::Undefined removeAllRanges();
    /// The empty method.
    /// [`Selection.empty`](https://developer.mozilla.org/en-US/docs/Web/API/Selection/empty)
    jsbind::Undefined empty();
    /// The getComposedRanges method.
    /// [`Selection.getComposedRanges`](https://developer.mozilla.org/en-US/docs/Web/API/Selection/getComposedRanges)
    jsbind::TypedArray<StaticRange> getComposedRanges();
    /// The getComposedRanges method.
    /// [`Selection.getComposedRanges`](https://developer.mozilla.org/en-US/docs/Web/API/Selection/getComposedRanges)
    jsbind::TypedArray<StaticRange> getComposedRanges(const GetComposedRangesOptions& options);
    /// The collapse method.
    /// [`Selection.collapse`](https://developer.mozilla.org/en-US/docs/Web/API/Selection/collapse)
    jsbind::Undefined collapse(const Node& node);
    /// The collapse method.
    /// [`Selection.collapse`](https://developer.mozilla.org/en-US/docs/Web/API/Selection/collapse)
    jsbind::Undefined collapse(const Node& node, unsigned long offset);
    /// The setPosition method.
    /// [`Selection.setPosition`](https://developer.mozilla.org/en-US/docs/Web/API/Selection/setPosition)
    jsbind::Undefined setPosition(const Node& node);
    /// The setPosition method.
    /// [`Selection.setPosition`](https://developer.mozilla.org/en-US/docs/Web/API/Selection/setPosition)
    jsbind::Undefined setPosition(const Node& node, unsigned long offset);
    /// The collapseToStart method.
    /// [`Selection.collapseToStart`](https://developer.mozilla.org/en-US/docs/Web/API/Selection/collapseToStart)
    jsbind::Undefined collapseToStart();
    /// The collapseToEnd method.
    /// [`Selection.collapseToEnd`](https://developer.mozilla.org/en-US/docs/Web/API/Selection/collapseToEnd)
    jsbind::Undefined collapseToEnd();
    /// The extend method.
    /// [`Selection.extend`](https://developer.mozilla.org/en-US/docs/Web/API/Selection/extend)
    jsbind::Undefined extend(const Node& node);
    /// The extend method.
    /// [`Selection.extend`](https://developer.mozilla.org/en-US/docs/Web/API/Selection/extend)
    jsbind::Undefined extend(const Node& node, unsigned long offset);
    /// The setBaseAndExtent method.
    /// [`Selection.setBaseAndExtent`](https://developer.mozilla.org/en-US/docs/Web/API/Selection/setBaseAndExtent)
    jsbind::Undefined setBaseAndExtent(const Node& anchorNode, unsigned long anchorOffset, const Node& focusNode, unsigned long focusOffset);
    /// The selectAllChildren method.
    /// [`Selection.selectAllChildren`](https://developer.mozilla.org/en-US/docs/Web/API/Selection/selectAllChildren)
    jsbind::Undefined selectAllChildren(const Node& node);
    /// The modify method.
    /// [`Selection.modify`](https://developer.mozilla.org/en-US/docs/Web/API/Selection/modify)
    jsbind::Undefined modify();
    /// The modify method.
    /// [`Selection.modify`](https://developer.mozilla.org/en-US/docs/Web/API/Selection/modify)
    jsbind::Undefined modify(const jsbind::String& alter);
    /// The modify method.
    /// [`Selection.modify`](https://developer.mozilla.org/en-US/docs/Web/API/Selection/modify)
    jsbind::Undefined modify(const jsbind::String& alter, const jsbind::String& direction);
    /// The modify method.
    /// [`Selection.modify`](https://developer.mozilla.org/en-US/docs/Web/API/Selection/modify)
    jsbind::Undefined modify(const jsbind::String& alter, const jsbind::String& direction, const jsbind::String& granularity);
    /// The deleteFromDocument method.
    /// [`Selection.deleteFromDocument`](https://developer.mozilla.org/en-US/docs/Web/API/Selection/deleteFromDocument)
    jsbind::Undefined deleteFromDocument();
    /// The containsNode method.
    /// [`Selection.containsNode`](https://developer.mozilla.org/en-US/docs/Web/API/Selection/containsNode)
    bool containsNode(const Node& node);
    /// The containsNode method.
    /// [`Selection.containsNode`](https://developer.mozilla.org/en-US/docs/Web/API/Selection/containsNode)
    bool containsNode(const Node& node, bool allowPartialContainment);
};

