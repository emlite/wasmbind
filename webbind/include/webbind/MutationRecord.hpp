#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class Node;
class NodeList;

/// Interface MutationRecord
/// [`MutationRecord`](https://developer.mozilla.org/en-US/docs/Web/API/MutationRecord)
class MutationRecord : public emlite::Val {
    explicit MutationRecord(Handle h) noexcept;
public:
    explicit MutationRecord(const emlite::Val &val) noexcept;
    static MutationRecord take_ownership(Handle h) noexcept;
    [[nodiscard]] MutationRecord clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// [`MutationRecord.type`](https://developer.mozilla.org/en-US/docs/Web/API/MutationRecord/type)
    /// [`MutationRecord.type`](https://developer.mozilla.org/en-US/docs/Web/API/MutationRecord/type)
    [[nodiscard]] jsbind::String type() const;
    /// [`MutationRecord.target`](https://developer.mozilla.org/en-US/docs/Web/API/MutationRecord/target)
    /// [`MutationRecord.target`](https://developer.mozilla.org/en-US/docs/Web/API/MutationRecord/target)
    [[nodiscard]] Node target() const;
    /// [`MutationRecord.addedNodes`](https://developer.mozilla.org/en-US/docs/Web/API/MutationRecord/addedNodes)
    /// [`MutationRecord.addedNodes`](https://developer.mozilla.org/en-US/docs/Web/API/MutationRecord/addedNodes)
    [[nodiscard]] NodeList addedNodes() const;
    /// [`MutationRecord.removedNodes`](https://developer.mozilla.org/en-US/docs/Web/API/MutationRecord/removedNodes)
    /// [`MutationRecord.removedNodes`](https://developer.mozilla.org/en-US/docs/Web/API/MutationRecord/removedNodes)
    [[nodiscard]] NodeList removedNodes() const;
    /// [`MutationRecord.previousSibling`](https://developer.mozilla.org/en-US/docs/Web/API/MutationRecord/previousSibling)
    /// [`MutationRecord.previousSibling`](https://developer.mozilla.org/en-US/docs/Web/API/MutationRecord/previousSibling)
    [[nodiscard]] Node previousSibling() const;
    /// [`MutationRecord.nextSibling`](https://developer.mozilla.org/en-US/docs/Web/API/MutationRecord/nextSibling)
    /// [`MutationRecord.nextSibling`](https://developer.mozilla.org/en-US/docs/Web/API/MutationRecord/nextSibling)
    [[nodiscard]] Node nextSibling() const;
    /// [`MutationRecord.attributeName`](https://developer.mozilla.org/en-US/docs/Web/API/MutationRecord/attributeName)
    /// [`MutationRecord.attributeName`](https://developer.mozilla.org/en-US/docs/Web/API/MutationRecord/attributeName)
    [[nodiscard]] jsbind::String attributeName() const;
    /// [`MutationRecord.attributeNamespace`](https://developer.mozilla.org/en-US/docs/Web/API/MutationRecord/attributeNamespace)
    /// [`MutationRecord.attributeNamespace`](https://developer.mozilla.org/en-US/docs/Web/API/MutationRecord/attributeNamespace)
    [[nodiscard]] jsbind::String attributeNamespace() const;
    /// [`MutationRecord.oldValue`](https://developer.mozilla.org/en-US/docs/Web/API/MutationRecord/oldValue)
    /// [`MutationRecord.oldValue`](https://developer.mozilla.org/en-US/docs/Web/API/MutationRecord/oldValue)
    [[nodiscard]] jsbind::String oldValue() const;
};

} // namespace webbind