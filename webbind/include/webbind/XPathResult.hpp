#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class Node;


/// The XPathResult class.
/// [`XPathResult`](https://developer.mozilla.org/en-US/docs/Web/API/XPathResult)
class XPathResult : public emlite::Val {
    explicit XPathResult(Handle h) noexcept;

public:
    explicit XPathResult(const emlite::Val &val) noexcept;
    static XPathResult take_ownership(Handle h) noexcept;

    [[nodiscard]] XPathResult clone() const noexcept;
    /// Getter of the `resultType` attribute.
    /// [`XPathResult.resultType`](https://developer.mozilla.org/en-US/docs/Web/API/XPathResult/resultType)
    [[nodiscard]] unsigned short resultType() const;
    /// Getter of the `numberValue` attribute.
    /// [`XPathResult.numberValue`](https://developer.mozilla.org/en-US/docs/Web/API/XPathResult/numberValue)
    [[nodiscard]] double numberValue() const;
    /// Getter of the `stringValue` attribute.
    /// [`XPathResult.stringValue`](https://developer.mozilla.org/en-US/docs/Web/API/XPathResult/stringValue)
    [[nodiscard]] jsbind::String stringValue() const;
    /// Getter of the `booleanValue` attribute.
    /// [`XPathResult.booleanValue`](https://developer.mozilla.org/en-US/docs/Web/API/XPathResult/booleanValue)
    [[nodiscard]] bool booleanValue() const;
    /// Getter of the `singleNodeValue` attribute.
    /// [`XPathResult.singleNodeValue`](https://developer.mozilla.org/en-US/docs/Web/API/XPathResult/singleNodeValue)
    [[nodiscard]] Node singleNodeValue() const;
    /// Getter of the `invalidIteratorState` attribute.
    /// [`XPathResult.invalidIteratorState`](https://developer.mozilla.org/en-US/docs/Web/API/XPathResult/invalidIteratorState)
    [[nodiscard]] bool invalidIteratorState() const;
    /// Getter of the `snapshotLength` attribute.
    /// [`XPathResult.snapshotLength`](https://developer.mozilla.org/en-US/docs/Web/API/XPathResult/snapshotLength)
    [[nodiscard]] unsigned long snapshotLength() const;
    /// The iterateNext method.
    /// [`XPathResult.iterateNext`](https://developer.mozilla.org/en-US/docs/Web/API/XPathResult/iterateNext)
    Node iterateNext();
    /// The snapshotItem method.
    /// [`XPathResult.snapshotItem`](https://developer.mozilla.org/en-US/docs/Web/API/XPathResult/snapshotItem)
    Node snapshotItem(unsigned long index);
};

