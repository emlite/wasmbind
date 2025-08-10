#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "EventTarget.hpp"

namespace webbind {

class SFrameTransformOptions;
class CryptoKey;
class ReadableStream;
class WritableStream;

/// Interface SFrameTransform
/// [`SFrameTransform`](https://developer.mozilla.org/en-US/docs/Web/API/SFrameTransform)
class SFrameTransform : public EventTarget {
    explicit SFrameTransform(Handle h) noexcept;
public:
    explicit SFrameTransform(const emlite::Val &val) noexcept;
    static SFrameTransform take_ownership(Handle h) noexcept;
    [[nodiscard]] SFrameTransform clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new SFrameTransform(..)` constructor, creating a new SFrameTransform instance
    SFrameTransform();
    /// The `new SFrameTransform(..)` constructor, creating a new SFrameTransform instance
    SFrameTransform(const SFrameTransformOptions& options);
    /// The setEncryptionKey method.
    /// [`SFrameTransform.setEncryptionKey`](https://developer.mozilla.org/en-US/docs/Web/API/SFrameTransform/setEncryptionKey)
    jsbind::Promise<jsbind::Undefined> setEncryptionKey(const CryptoKey& key);
    /// The setEncryptionKey method.
    /// [`SFrameTransform.setEncryptionKey`](https://developer.mozilla.org/en-US/docs/Web/API/SFrameTransform/setEncryptionKey)
    jsbind::Promise<jsbind::Undefined> setEncryptionKey(const CryptoKey& key, const jsbind::Any& keyID);
    /// [`SFrameTransform.onerror`](https://developer.mozilla.org/en-US/docs/Web/API/SFrameTransform/onerror)
    /// [`SFrameTransform.onerror`](https://developer.mozilla.org/en-US/docs/Web/API/SFrameTransform/onerror)
    [[nodiscard]] jsbind::Any onerror() const;
    /// Setter of the `onerror` attribute.
    /// [`SFrameTransform.onerror`](https://developer.mozilla.org/en-US/docs/Web/API/SFrameTransform/onerror)
    void onerror(const jsbind::Any& value);
    /// [`SFrameTransform.readable`](https://developer.mozilla.org/en-US/docs/Web/API/SFrameTransform/readable)
    /// [`SFrameTransform.readable`](https://developer.mozilla.org/en-US/docs/Web/API/SFrameTransform/readable)
    [[nodiscard]] ReadableStream readable() const;
    /// [`SFrameTransform.writable`](https://developer.mozilla.org/en-US/docs/Web/API/SFrameTransform/writable)
    /// [`SFrameTransform.writable`](https://developer.mozilla.org/en-US/docs/Web/API/SFrameTransform/writable)
    [[nodiscard]] WritableStream writable() const;
};

} // namespace webbind