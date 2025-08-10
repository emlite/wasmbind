#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "Event.hpp"

namespace webbind {

class BlobEventInit;
class Blob;

/// Interface BlobEvent
/// [`BlobEvent`](https://developer.mozilla.org/en-US/docs/Web/API/BlobEvent)
class BlobEvent : public Event {
    explicit BlobEvent(Handle h) noexcept;
public:
    explicit BlobEvent(const emlite::Val &val) noexcept;
    static BlobEvent take_ownership(Handle h) noexcept;
    [[nodiscard]] BlobEvent clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new BlobEvent(..)` constructor, creating a new BlobEvent instance
    BlobEvent(const jsbind::String& type, const BlobEventInit& eventInitDict);
    /// [`BlobEvent.data`](https://developer.mozilla.org/en-US/docs/Web/API/BlobEvent/data)
    /// [`BlobEvent.data`](https://developer.mozilla.org/en-US/docs/Web/API/BlobEvent/data)
    [[nodiscard]] Blob data() const;
    /// [`BlobEvent.timecode`](https://developer.mozilla.org/en-US/docs/Web/API/BlobEvent/timecode)
    /// [`BlobEvent.timecode`](https://developer.mozilla.org/en-US/docs/Web/API/BlobEvent/timecode)
    [[nodiscard]] jsbind::Any timecode() const;
};

} // namespace webbind