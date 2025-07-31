#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "MediaSource.hpp"
#include "enums.hpp"


/// The ManagedMediaSource class.
/// [`ManagedMediaSource`](https://developer.mozilla.org/en-US/docs/Web/API/ManagedMediaSource)
class ManagedMediaSource : public MediaSource {
    explicit ManagedMediaSource(Handle h) noexcept;

public:
    explicit ManagedMediaSource(const emlite::Val &val) noexcept;
    static ManagedMediaSource take_ownership(Handle h) noexcept;

    [[nodiscard]] ManagedMediaSource clone() const noexcept;
    /// The `new ManagedMediaSource(..)` constructor, creating a new ManagedMediaSource instance
    ManagedMediaSource();
    /// Getter of the `streaming` attribute.
    /// [`ManagedMediaSource.streaming`](https://developer.mozilla.org/en-US/docs/Web/API/ManagedMediaSource/streaming)
    [[nodiscard]] bool streaming() const;
    /// Getter of the `onstartstreaming` attribute.
    /// [`ManagedMediaSource.onstartstreaming`](https://developer.mozilla.org/en-US/docs/Web/API/ManagedMediaSource/onstartstreaming)
    [[nodiscard]] jsbind::Any onstartstreaming() const;
    /// Setter of the `onstartstreaming` attribute.
    /// [`ManagedMediaSource.onstartstreaming`](https://developer.mozilla.org/en-US/docs/Web/API/ManagedMediaSource/onstartstreaming)
    void onstartstreaming(const jsbind::Any& value);
    /// Getter of the `onendstreaming` attribute.
    /// [`ManagedMediaSource.onendstreaming`](https://developer.mozilla.org/en-US/docs/Web/API/ManagedMediaSource/onendstreaming)
    [[nodiscard]] jsbind::Any onendstreaming() const;
    /// Setter of the `onendstreaming` attribute.
    /// [`ManagedMediaSource.onendstreaming`](https://developer.mozilla.org/en-US/docs/Web/API/ManagedMediaSource/onendstreaming)
    void onendstreaming(const jsbind::Any& value);
};

