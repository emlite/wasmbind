#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class Node;
class NodeList;


/// The MutationRecord class.
/// [`MutationRecord`](https://developer.mozilla.org/en-US/docs/Web/API/MutationRecord)
class MutationRecord : public emlite::Val {
    explicit MutationRecord(Handle h) noexcept;

public:
    explicit MutationRecord(const emlite::Val &val) noexcept;
    static MutationRecord take_ownership(Handle h) noexcept;

    [[nodiscard]] MutationRecord clone() const noexcept;
    /// Getter of the `type` attribute.
    /// [`MutationRecord.type`](https://developer.mozilla.org/en-US/docs/Web/API/MutationRecord/type)
    [[nodiscard]] jsbind::String type() const;
    /// Getter of the `target` attribute.
    /// [`MutationRecord.target`](https://developer.mozilla.org/en-US/docs/Web/API/MutationRecord/target)
    [[nodiscard]] Node target() const;
    /// Getter of the `addedNodes` attribute.
    /// [`MutationRecord.addedNodes`](https://developer.mozilla.org/en-US/docs/Web/API/MutationRecord/addedNodes)
    [[nodiscard]] NodeList addedNodes() const;
    /// Getter of the `removedNodes` attribute.
    /// [`MutationRecord.removedNodes`](https://developer.mozilla.org/en-US/docs/Web/API/MutationRecord/removedNodes)
    [[nodiscard]] NodeList removedNodes() const;
    /// Getter of the `previousSibling` attribute.
    /// [`MutationRecord.previousSibling`](https://developer.mozilla.org/en-US/docs/Web/API/MutationRecord/previousSibling)
    [[nodiscard]] Node previousSibling() const;
    /// Getter of the `nextSibling` attribute.
    /// [`MutationRecord.nextSibling`](https://developer.mozilla.org/en-US/docs/Web/API/MutationRecord/nextSibling)
    [[nodiscard]] Node nextSibling() const;
    /// Getter of the `attributeName` attribute.
    /// [`MutationRecord.attributeName`](https://developer.mozilla.org/en-US/docs/Web/API/MutationRecord/attributeName)
    [[nodiscard]] jsbind::String attributeName() const;
    /// Getter of the `attributeNamespace` attribute.
    /// [`MutationRecord.attributeNamespace`](https://developer.mozilla.org/en-US/docs/Web/API/MutationRecord/attributeNamespace)
    [[nodiscard]] jsbind::String attributeNamespace() const;
    /// Getter of the `oldValue` attribute.
    /// [`MutationRecord.oldValue`](https://developer.mozilla.org/en-US/docs/Web/API/MutationRecord/oldValue)
    [[nodiscard]] jsbind::String oldValue() const;
};

