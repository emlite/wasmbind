#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "Event.hpp"
#include "enums.hpp"


/// The ProgressEvent class.
/// [`ProgressEvent`](https://developer.mozilla.org/en-US/docs/Web/API/ProgressEvent)
class ProgressEvent : public Event {
    explicit ProgressEvent(Handle h) noexcept;

public:
    explicit ProgressEvent(const emlite::Val &val) noexcept;
    static ProgressEvent take_ownership(Handle h) noexcept;

    [[nodiscard]] ProgressEvent clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new ProgressEvent(..)` constructor, creating a new ProgressEvent instance
    ProgressEvent(const jsbind::String& type);
    /// The `new ProgressEvent(..)` constructor, creating a new ProgressEvent instance
    ProgressEvent(const jsbind::String& type, const jsbind::Any& eventInitDict);
    /// Getter of the `lengthComputable` attribute.
    /// [`ProgressEvent.lengthComputable`](https://developer.mozilla.org/en-US/docs/Web/API/ProgressEvent/lengthComputable)
    [[nodiscard]] bool lengthComputable() const;
    /// Getter of the `loaded` attribute.
    /// [`ProgressEvent.loaded`](https://developer.mozilla.org/en-US/docs/Web/API/ProgressEvent/loaded)
    [[nodiscard]] double loaded() const;
    /// Getter of the `total` attribute.
    /// [`ProgressEvent.total`](https://developer.mozilla.org/en-US/docs/Web/API/ProgressEvent/total)
    [[nodiscard]] double total() const;
};

