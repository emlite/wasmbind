#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "HTMLElement.hpp"
#include "enums.hpp"

class Node;
class AssignedNodesOptions;
class Element;


class AssignedNodesOptions : public emlite::Val {
  explicit AssignedNodesOptions(Handle h) noexcept;
public:
    static AssignedNodesOptions take_ownership(Handle h) noexcept;
    explicit AssignedNodesOptions(const emlite::Val &val) noexcept;
    AssignedNodesOptions() noexcept;
    AssignedNodesOptions clone() const noexcept;
    bool flatten() const;
    void flatten(bool value);
};

class HTMLSlotElement : public HTMLElement {
    explicit HTMLSlotElement(Handle h) noexcept;

public:
    explicit HTMLSlotElement(const emlite::Val &val) noexcept;
    static HTMLSlotElement take_ownership(Handle h) noexcept;

    HTMLSlotElement clone() const noexcept;
    HTMLSlotElement();
    jsbind::String name() const;
    void name(const jsbind::String& value);
    jsbind::TypedArray<Node> assignedNodes();
    jsbind::TypedArray<Node> assignedNodes(const AssignedNodesOptions& options);
    jsbind::TypedArray<Element> assignedElements();
    jsbind::TypedArray<Element> assignedElements(const AssignedNodesOptions& options);
    jsbind::Undefined assign(const jsbind::Any& nodes);
};

