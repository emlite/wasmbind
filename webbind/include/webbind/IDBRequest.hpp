#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "EventTarget.hpp"
#include "enums.hpp"

namespace webbind {

class DOMException;
class IDBTransaction;

/// Interface IDBRequest
/// [`IDBRequest`](https://developer.mozilla.org/en-US/docs/Web/API/IDBRequest)
class IDBRequest : public EventTarget {
    explicit IDBRequest(Handle h) noexcept;
public:
    explicit IDBRequest(const emlite::Val &val) noexcept;
    static IDBRequest take_ownership(Handle h) noexcept;
    [[nodiscard]] IDBRequest clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// [`IDBRequest.result`](https://developer.mozilla.org/en-US/docs/Web/API/IDBRequest/result)
    /// [`IDBRequest.result`](https://developer.mozilla.org/en-US/docs/Web/API/IDBRequest/result)
    [[nodiscard]] jsbind::Any result() const;
    /// [`IDBRequest.error`](https://developer.mozilla.org/en-US/docs/Web/API/IDBRequest/error)
    /// [`IDBRequest.error`](https://developer.mozilla.org/en-US/docs/Web/API/IDBRequest/error)
    [[nodiscard]] DOMException error() const;
    /// [`IDBRequest.source`](https://developer.mozilla.org/en-US/docs/Web/API/IDBRequest/source)
    /// [`IDBRequest.source`](https://developer.mozilla.org/en-US/docs/Web/API/IDBRequest/source)
    [[nodiscard]] jsbind::Any source() const;
    /// [`IDBRequest.transaction`](https://developer.mozilla.org/en-US/docs/Web/API/IDBRequest/transaction)
    /// [`IDBRequest.transaction`](https://developer.mozilla.org/en-US/docs/Web/API/IDBRequest/transaction)
    [[nodiscard]] IDBTransaction transaction() const;
    /// [`IDBRequest.readyState`](https://developer.mozilla.org/en-US/docs/Web/API/IDBRequest/readyState)
    /// [`IDBRequest.readyState`](https://developer.mozilla.org/en-US/docs/Web/API/IDBRequest/readyState)
    [[nodiscard]] IDBRequestReadyState readyState() const;
    /// [`IDBRequest.onsuccess`](https://developer.mozilla.org/en-US/docs/Web/API/IDBRequest/onsuccess)
    /// [`IDBRequest.onsuccess`](https://developer.mozilla.org/en-US/docs/Web/API/IDBRequest/onsuccess)
    [[nodiscard]] jsbind::Any onsuccess() const;
    /// Setter of the `onsuccess` attribute.
    /// [`IDBRequest.onsuccess`](https://developer.mozilla.org/en-US/docs/Web/API/IDBRequest/onsuccess)
    void onsuccess(const jsbind::Any& value);
    /// [`IDBRequest.onerror`](https://developer.mozilla.org/en-US/docs/Web/API/IDBRequest/onerror)
    /// [`IDBRequest.onerror`](https://developer.mozilla.org/en-US/docs/Web/API/IDBRequest/onerror)
    [[nodiscard]] jsbind::Any onerror() const;
    /// Setter of the `onerror` attribute.
    /// [`IDBRequest.onerror`](https://developer.mozilla.org/en-US/docs/Web/API/IDBRequest/onerror)
    void onerror(const jsbind::Any& value);
};

} // namespace webbind