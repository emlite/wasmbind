#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "EventTarget.hpp"
#include "enums.hpp"

class DOMException;
class IDBTransaction;


/// The IDBRequest class.
/// [`IDBRequest`](https://developer.mozilla.org/en-US/docs/Web/API/IDBRequest)
class IDBRequest : public EventTarget {
    explicit IDBRequest(Handle h) noexcept;

public:
    explicit IDBRequest(const emlite::Val &val) noexcept;
    static IDBRequest take_ownership(Handle h) noexcept;

    [[nodiscard]] IDBRequest clone() const noexcept;
    /// Getter of the `result` attribute.
    /// [`IDBRequest.result`](https://developer.mozilla.org/en-US/docs/Web/API/IDBRequest/result)
    [[nodiscard]] jsbind::Any result() const;
    /// Getter of the `error` attribute.
    /// [`IDBRequest.error`](https://developer.mozilla.org/en-US/docs/Web/API/IDBRequest/error)
    [[nodiscard]] DOMException error() const;
    /// Getter of the `source` attribute.
    /// [`IDBRequest.source`](https://developer.mozilla.org/en-US/docs/Web/API/IDBRequest/source)
    [[nodiscard]] jsbind::Any source() const;
    /// Getter of the `transaction` attribute.
    /// [`IDBRequest.transaction`](https://developer.mozilla.org/en-US/docs/Web/API/IDBRequest/transaction)
    [[nodiscard]] IDBTransaction transaction() const;
    /// Getter of the `readyState` attribute.
    /// [`IDBRequest.readyState`](https://developer.mozilla.org/en-US/docs/Web/API/IDBRequest/readyState)
    [[nodiscard]] IDBRequestReadyState readyState() const;
    /// Getter of the `onsuccess` attribute.
    /// [`IDBRequest.onsuccess`](https://developer.mozilla.org/en-US/docs/Web/API/IDBRequest/onsuccess)
    [[nodiscard]] jsbind::Any onsuccess() const;
    /// Setter of the `onsuccess` attribute.
    /// [`IDBRequest.onsuccess`](https://developer.mozilla.org/en-US/docs/Web/API/IDBRequest/onsuccess)
    void onsuccess(const jsbind::Any& value);
    /// Getter of the `onerror` attribute.
    /// [`IDBRequest.onerror`](https://developer.mozilla.org/en-US/docs/Web/API/IDBRequest/onerror)
    [[nodiscard]] jsbind::Any onerror() const;
    /// Setter of the `onerror` attribute.
    /// [`IDBRequest.onerror`](https://developer.mozilla.org/en-US/docs/Web/API/IDBRequest/onerror)
    void onerror(const jsbind::Any& value);
};

