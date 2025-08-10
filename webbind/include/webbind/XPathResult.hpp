#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class Node;

/// Interface XPathResult
/// [`XPathResult`](https://developer.mozilla.org/en-US/docs/Web/API/XPathResult)
class XPathResult : public emlite::Val {
    explicit XPathResult(Handle h) noexcept;
public:
    explicit XPathResult(const emlite::Val &val) noexcept;
    static XPathResult take_ownership(Handle h) noexcept;
    [[nodiscard]] XPathResult clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// [`XPathResult.resultType`](https://developer.mozilla.org/en-US/docs/Web/API/XPathResult/resultType)
    /// [`XPathResult.resultType`](https://developer.mozilla.org/en-US/docs/Web/API/XPathResult/resultType)
    [[nodiscard]] unsigned short resultType() const;
    /// [`XPathResult.numberValue`](https://developer.mozilla.org/en-US/docs/Web/API/XPathResult/numberValue)
    /// [`XPathResult.numberValue`](https://developer.mozilla.org/en-US/docs/Web/API/XPathResult/numberValue)
    [[nodiscard]] double numberValue() const;
    /// [`XPathResult.stringValue`](https://developer.mozilla.org/en-US/docs/Web/API/XPathResult/stringValue)
    /// [`XPathResult.stringValue`](https://developer.mozilla.org/en-US/docs/Web/API/XPathResult/stringValue)
    [[nodiscard]] jsbind::String stringValue() const;
    /// [`XPathResult.booleanValue`](https://developer.mozilla.org/en-US/docs/Web/API/XPathResult/booleanValue)
    /// [`XPathResult.booleanValue`](https://developer.mozilla.org/en-US/docs/Web/API/XPathResult/booleanValue)
    [[nodiscard]] bool booleanValue() const;
    /// [`XPathResult.singleNodeValue`](https://developer.mozilla.org/en-US/docs/Web/API/XPathResult/singleNodeValue)
    /// [`XPathResult.singleNodeValue`](https://developer.mozilla.org/en-US/docs/Web/API/XPathResult/singleNodeValue)
    [[nodiscard]] Node singleNodeValue() const;
    /// [`XPathResult.invalidIteratorState`](https://developer.mozilla.org/en-US/docs/Web/API/XPathResult/invalidIteratorState)
    /// [`XPathResult.invalidIteratorState`](https://developer.mozilla.org/en-US/docs/Web/API/XPathResult/invalidIteratorState)
    [[nodiscard]] bool invalidIteratorState() const;
    /// [`XPathResult.snapshotLength`](https://developer.mozilla.org/en-US/docs/Web/API/XPathResult/snapshotLength)
    /// [`XPathResult.snapshotLength`](https://developer.mozilla.org/en-US/docs/Web/API/XPathResult/snapshotLength)
    [[nodiscard]] unsigned long snapshotLength() const;
    /// The iterateNext method.
    /// [`XPathResult.iterateNext`](https://developer.mozilla.org/en-US/docs/Web/API/XPathResult/iterateNext)
    Node iterateNext();
    /// The snapshotItem method.
    /// [`XPathResult.snapshotItem`](https://developer.mozilla.org/en-US/docs/Web/API/XPathResult/snapshotItem)
    Node snapshotItem(unsigned long index);
};

} // namespace webbind