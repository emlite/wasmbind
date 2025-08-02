#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class Blob;


/// The PushMessageData class.
/// [`PushMessageData`](https://developer.mozilla.org/en-US/docs/Web/API/PushMessageData)
class PushMessageData : public emlite::Val {
    explicit PushMessageData(Handle h) noexcept;

public:
    explicit PushMessageData(const emlite::Val &val) noexcept;
    static PushMessageData take_ownership(Handle h) noexcept;

    [[nodiscard]] PushMessageData clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The arrayBuffer method.
    /// [`PushMessageData.arrayBuffer`](https://developer.mozilla.org/en-US/docs/Web/API/PushMessageData/arrayBuffer)
    jsbind::ArrayBuffer arrayBuffer();
    /// The blob method.
    /// [`PushMessageData.blob`](https://developer.mozilla.org/en-US/docs/Web/API/PushMessageData/blob)
    Blob blob();
    /// The bytes method.
    /// [`PushMessageData.bytes`](https://developer.mozilla.org/en-US/docs/Web/API/PushMessageData/bytes)
    jsbind::Uint8Array bytes();
    /// The json method.
    /// [`PushMessageData.json`](https://developer.mozilla.org/en-US/docs/Web/API/PushMessageData/json)
    jsbind::Any json();
    /// The text method.
    /// [`PushMessageData.text`](https://developer.mozilla.org/en-US/docs/Web/API/PushMessageData/text)
    jsbind::String text();
};

