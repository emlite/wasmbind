#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "Event.hpp"
#include "enums.hpp"

class Blob;


/// The BlobEvent class.
/// [`BlobEvent`](https://developer.mozilla.org/en-US/docs/Web/API/BlobEvent)
class BlobEvent : public Event {
    explicit BlobEvent(Handle h) noexcept;

public:
    explicit BlobEvent(const emlite::Val &val) noexcept;
    static BlobEvent take_ownership(Handle h) noexcept;

    [[nodiscard]] BlobEvent clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new BlobEvent(..)` constructor, creating a new BlobEvent instance
    BlobEvent(const jsbind::String& type, const jsbind::Any& eventInitDict);
    /// Getter of the `data` attribute.
    /// [`BlobEvent.data`](https://developer.mozilla.org/en-US/docs/Web/API/BlobEvent/data)
    [[nodiscard]] Blob data() const;
    /// Getter of the `timecode` attribute.
    /// [`BlobEvent.timecode`](https://developer.mozilla.org/en-US/docs/Web/API/BlobEvent/timecode)
    [[nodiscard]] jsbind::Any timecode() const;
};

