#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "EventTarget.hpp"
#include "enums.hpp"

namespace webbind {

/// Interface RTCDataChannel
/// [`RTCDataChannel`](https://developer.mozilla.org/en-US/docs/Web/API/RTCDataChannel)
class RTCDataChannel : public EventTarget {
    explicit RTCDataChannel(Handle h) noexcept;
public:
    explicit RTCDataChannel(const emlite::Val &val) noexcept;
    static RTCDataChannel take_ownership(Handle h) noexcept;
    [[nodiscard]] RTCDataChannel clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// [`RTCDataChannel.label`](https://developer.mozilla.org/en-US/docs/Web/API/RTCDataChannel/label)
    /// [`RTCDataChannel.label`](https://developer.mozilla.org/en-US/docs/Web/API/RTCDataChannel/label)
    [[nodiscard]] jsbind::String label() const;
    /// [`RTCDataChannel.ordered`](https://developer.mozilla.org/en-US/docs/Web/API/RTCDataChannel/ordered)
    /// [`RTCDataChannel.ordered`](https://developer.mozilla.org/en-US/docs/Web/API/RTCDataChannel/ordered)
    [[nodiscard]] bool ordered() const;
    /// [`RTCDataChannel.maxPacketLifeTime`](https://developer.mozilla.org/en-US/docs/Web/API/RTCDataChannel/maxPacketLifeTime)
    /// [`RTCDataChannel.maxPacketLifeTime`](https://developer.mozilla.org/en-US/docs/Web/API/RTCDataChannel/maxPacketLifeTime)
    [[nodiscard]] unsigned short maxPacketLifeTime() const;
    /// [`RTCDataChannel.maxRetransmits`](https://developer.mozilla.org/en-US/docs/Web/API/RTCDataChannel/maxRetransmits)
    /// [`RTCDataChannel.maxRetransmits`](https://developer.mozilla.org/en-US/docs/Web/API/RTCDataChannel/maxRetransmits)
    [[nodiscard]] unsigned short maxRetransmits() const;
    /// [`RTCDataChannel.protocol`](https://developer.mozilla.org/en-US/docs/Web/API/RTCDataChannel/protocol)
    /// [`RTCDataChannel.protocol`](https://developer.mozilla.org/en-US/docs/Web/API/RTCDataChannel/protocol)
    [[nodiscard]] jsbind::String protocol() const;
    /// [`RTCDataChannel.negotiated`](https://developer.mozilla.org/en-US/docs/Web/API/RTCDataChannel/negotiated)
    /// [`RTCDataChannel.negotiated`](https://developer.mozilla.org/en-US/docs/Web/API/RTCDataChannel/negotiated)
    [[nodiscard]] bool negotiated() const;
    /// [`RTCDataChannel.id`](https://developer.mozilla.org/en-US/docs/Web/API/RTCDataChannel/id)
    /// [`RTCDataChannel.id`](https://developer.mozilla.org/en-US/docs/Web/API/RTCDataChannel/id)
    [[nodiscard]] unsigned short id() const;
    /// [`RTCDataChannel.readyState`](https://developer.mozilla.org/en-US/docs/Web/API/RTCDataChannel/readyState)
    /// [`RTCDataChannel.readyState`](https://developer.mozilla.org/en-US/docs/Web/API/RTCDataChannel/readyState)
    [[nodiscard]] RTCDataChannelState readyState() const;
    /// [`RTCDataChannel.bufferedAmount`](https://developer.mozilla.org/en-US/docs/Web/API/RTCDataChannel/bufferedAmount)
    /// [`RTCDataChannel.bufferedAmount`](https://developer.mozilla.org/en-US/docs/Web/API/RTCDataChannel/bufferedAmount)
    [[nodiscard]] unsigned long bufferedAmount() const;
    /// [`RTCDataChannel.bufferedAmountLowThreshold`](https://developer.mozilla.org/en-US/docs/Web/API/RTCDataChannel/bufferedAmountLowThreshold)
    /// [`RTCDataChannel.bufferedAmountLowThreshold`](https://developer.mozilla.org/en-US/docs/Web/API/RTCDataChannel/bufferedAmountLowThreshold)
    [[nodiscard]] unsigned long bufferedAmountLowThreshold() const;
    /// Setter of the `bufferedAmountLowThreshold` attribute.
    /// [`RTCDataChannel.bufferedAmountLowThreshold`](https://developer.mozilla.org/en-US/docs/Web/API/RTCDataChannel/bufferedAmountLowThreshold)
    void bufferedAmountLowThreshold(unsigned long value);
    /// [`RTCDataChannel.onopen`](https://developer.mozilla.org/en-US/docs/Web/API/RTCDataChannel/onopen)
    /// [`RTCDataChannel.onopen`](https://developer.mozilla.org/en-US/docs/Web/API/RTCDataChannel/onopen)
    [[nodiscard]] jsbind::Any onopen() const;
    /// Setter of the `onopen` attribute.
    /// [`RTCDataChannel.onopen`](https://developer.mozilla.org/en-US/docs/Web/API/RTCDataChannel/onopen)
    void onopen(const jsbind::Any& value);
    /// [`RTCDataChannel.onbufferedamountlow`](https://developer.mozilla.org/en-US/docs/Web/API/RTCDataChannel/onbufferedamountlow)
    /// [`RTCDataChannel.onbufferedamountlow`](https://developer.mozilla.org/en-US/docs/Web/API/RTCDataChannel/onbufferedamountlow)
    [[nodiscard]] jsbind::Any onbufferedamountlow() const;
    /// Setter of the `onbufferedamountlow` attribute.
    /// [`RTCDataChannel.onbufferedamountlow`](https://developer.mozilla.org/en-US/docs/Web/API/RTCDataChannel/onbufferedamountlow)
    void onbufferedamountlow(const jsbind::Any& value);
    /// [`RTCDataChannel.onerror`](https://developer.mozilla.org/en-US/docs/Web/API/RTCDataChannel/onerror)
    /// [`RTCDataChannel.onerror`](https://developer.mozilla.org/en-US/docs/Web/API/RTCDataChannel/onerror)
    [[nodiscard]] jsbind::Any onerror() const;
    /// Setter of the `onerror` attribute.
    /// [`RTCDataChannel.onerror`](https://developer.mozilla.org/en-US/docs/Web/API/RTCDataChannel/onerror)
    void onerror(const jsbind::Any& value);
    /// [`RTCDataChannel.onclosing`](https://developer.mozilla.org/en-US/docs/Web/API/RTCDataChannel/onclosing)
    /// [`RTCDataChannel.onclosing`](https://developer.mozilla.org/en-US/docs/Web/API/RTCDataChannel/onclosing)
    [[nodiscard]] jsbind::Any onclosing() const;
    /// Setter of the `onclosing` attribute.
    /// [`RTCDataChannel.onclosing`](https://developer.mozilla.org/en-US/docs/Web/API/RTCDataChannel/onclosing)
    void onclosing(const jsbind::Any& value);
    /// [`RTCDataChannel.onclose`](https://developer.mozilla.org/en-US/docs/Web/API/RTCDataChannel/onclose)
    /// [`RTCDataChannel.onclose`](https://developer.mozilla.org/en-US/docs/Web/API/RTCDataChannel/onclose)
    [[nodiscard]] jsbind::Any onclose() const;
    /// Setter of the `onclose` attribute.
    /// [`RTCDataChannel.onclose`](https://developer.mozilla.org/en-US/docs/Web/API/RTCDataChannel/onclose)
    void onclose(const jsbind::Any& value);
    /// The close method.
    /// [`RTCDataChannel.close`](https://developer.mozilla.org/en-US/docs/Web/API/RTCDataChannel/close)
    jsbind::Undefined close();
    /// [`RTCDataChannel.onmessage`](https://developer.mozilla.org/en-US/docs/Web/API/RTCDataChannel/onmessage)
    /// [`RTCDataChannel.onmessage`](https://developer.mozilla.org/en-US/docs/Web/API/RTCDataChannel/onmessage)
    [[nodiscard]] jsbind::Any onmessage() const;
    /// Setter of the `onmessage` attribute.
    /// [`RTCDataChannel.onmessage`](https://developer.mozilla.org/en-US/docs/Web/API/RTCDataChannel/onmessage)
    void onmessage(const jsbind::Any& value);
    /// [`RTCDataChannel.binaryType`](https://developer.mozilla.org/en-US/docs/Web/API/RTCDataChannel/binaryType)
    /// [`RTCDataChannel.binaryType`](https://developer.mozilla.org/en-US/docs/Web/API/RTCDataChannel/binaryType)
    [[nodiscard]] BinaryType binaryType() const;
    /// Setter of the `binaryType` attribute.
    /// [`RTCDataChannel.binaryType`](https://developer.mozilla.org/en-US/docs/Web/API/RTCDataChannel/binaryType)
    void binaryType(const BinaryType& value);
    /// The send method.
    /// [`RTCDataChannel.send`](https://developer.mozilla.org/en-US/docs/Web/API/RTCDataChannel/send)
    jsbind::Undefined send(const jsbind::Any& data);
    /// [`RTCDataChannel.priority`](https://developer.mozilla.org/en-US/docs/Web/API/RTCDataChannel/priority)
    /// [`RTCDataChannel.priority`](https://developer.mozilla.org/en-US/docs/Web/API/RTCDataChannel/priority)
    [[nodiscard]] RTCPriorityType priority() const;
};

} // namespace webbind