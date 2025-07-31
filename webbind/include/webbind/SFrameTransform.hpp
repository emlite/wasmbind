#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "EventTarget.hpp"
#include "enums.hpp"

class CryptoKey;
class ReadableStream;
class WritableStream;


/// The SFrameTransform class.
/// [`SFrameTransform`](https://developer.mozilla.org/en-US/docs/Web/API/SFrameTransform)
class SFrameTransform : public EventTarget {
    explicit SFrameTransform(Handle h) noexcept;

public:
    explicit SFrameTransform(const emlite::Val &val) noexcept;
    static SFrameTransform take_ownership(Handle h) noexcept;

    [[nodiscard]] SFrameTransform clone() const noexcept;
    /// The `new SFrameTransform(..)` constructor, creating a new SFrameTransform instance
    SFrameTransform();
    /// The `new SFrameTransform(..)` constructor, creating a new SFrameTransform instance
    SFrameTransform(const jsbind::Any& options);
    /// The setEncryptionKey method.
    /// [`SFrameTransform.setEncryptionKey`](https://developer.mozilla.org/en-US/docs/Web/API/SFrameTransform/setEncryptionKey)
    jsbind::Promise<jsbind::Undefined> setEncryptionKey(const CryptoKey& key);
    /// The setEncryptionKey method.
    /// [`SFrameTransform.setEncryptionKey`](https://developer.mozilla.org/en-US/docs/Web/API/SFrameTransform/setEncryptionKey)
    jsbind::Promise<jsbind::Undefined> setEncryptionKey(const CryptoKey& key, const jsbind::Any& keyID);
    /// Getter of the `onerror` attribute.
    /// [`SFrameTransform.onerror`](https://developer.mozilla.org/en-US/docs/Web/API/SFrameTransform/onerror)
    [[nodiscard]] jsbind::Any onerror() const;
    /// Setter of the `onerror` attribute.
    /// [`SFrameTransform.onerror`](https://developer.mozilla.org/en-US/docs/Web/API/SFrameTransform/onerror)
    void onerror(const jsbind::Any& value);
    /// Getter of the `readable` attribute.
    /// [`SFrameTransform.readable`](https://developer.mozilla.org/en-US/docs/Web/API/SFrameTransform/readable)
    [[nodiscard]] ReadableStream readable() const;
    /// Getter of the `writable` attribute.
    /// [`SFrameTransform.writable`](https://developer.mozilla.org/en-US/docs/Web/API/SFrameTransform/writable)
    [[nodiscard]] WritableStream writable() const;
};

