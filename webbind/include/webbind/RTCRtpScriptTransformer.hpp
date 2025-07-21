#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "EventTarget.hpp"
#include "enums.hpp"

class ReadableStream;
class WritableStream;


class RTCRtpScriptTransformer : public EventTarget {
    explicit RTCRtpScriptTransformer(Handle h) noexcept;

public:
    explicit RTCRtpScriptTransformer(const emlite::Val &val) noexcept;
    static RTCRtpScriptTransformer take_ownership(Handle h) noexcept;

    RTCRtpScriptTransformer clone() const noexcept;
    ReadableStream readable() const;
    jsbind::Promise<long long> generateKeyFrame();
    jsbind::Promise<long long> generateKeyFrame(const jsbind::DOMString& rid);
    jsbind::Promise<jsbind::Undefined> sendKeyFrameRequest();
    WritableStream writable() const;
    jsbind::Any onkeyframerequest() const;
    void onkeyframerequest(const jsbind::Any& value);
    jsbind::Any options() const;
};

