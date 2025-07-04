#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "EventTarget.hpp"
#include "enums.hpp"

class CryptoKey;
class ReadableStream;
class WritableStream;


class SFrameTransform : public EventTarget {
    explicit SFrameTransform(Handle h) noexcept;

public:
    explicit SFrameTransform(const emlite::Val &val) noexcept;
    static SFrameTransform take_ownership(Handle h) noexcept;

    SFrameTransform clone() const noexcept;
    SFrameTransform(const jsbind::Any& options);
    jsbind::Promise setEncryptionKey(const CryptoKey& key, const jsbind::Any& keyID);
    jsbind::Any onerror() const;
    void onerror(const jsbind::Any& value);
    ReadableStream readable() const;
    WritableStream writable() const;
};

