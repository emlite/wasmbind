#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "EventTarget.hpp"
#include "enums.hpp"

namespace webbind {

class FontFaceSet;
class FontFace;

/// Interface FontFaceSet
/// [`FontFaceSet`](https://developer.mozilla.org/en-US/docs/Web/API/FontFaceSet)
class FontFaceSet : public EventTarget {
    explicit FontFaceSet(Handle h) noexcept;
public:
    explicit FontFaceSet(const emlite::Val &val) noexcept;
    static FontFaceSet take_ownership(Handle h) noexcept;
    [[nodiscard]] FontFaceSet clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The add method.
    /// [`FontFaceSet.add`](https://developer.mozilla.org/en-US/docs/Web/API/FontFaceSet/add)
    FontFaceSet add(const FontFace& font);
    /// The delete method.
    /// [`FontFaceSet.delete`](https://developer.mozilla.org/en-US/docs/Web/API/FontFaceSet/delete)
    bool delete_(const FontFace& font);
    /// The clear method.
    /// [`FontFaceSet.clear`](https://developer.mozilla.org/en-US/docs/Web/API/FontFaceSet/clear)
    jsbind::Undefined clear();
    /// [`FontFaceSet.onloading`](https://developer.mozilla.org/en-US/docs/Web/API/FontFaceSet/onloading)
    /// [`FontFaceSet.onloading`](https://developer.mozilla.org/en-US/docs/Web/API/FontFaceSet/onloading)
    [[nodiscard]] jsbind::Any onloading() const;
    /// Setter of the `onloading` attribute.
    /// [`FontFaceSet.onloading`](https://developer.mozilla.org/en-US/docs/Web/API/FontFaceSet/onloading)
    void onloading(const jsbind::Any& value);
    /// [`FontFaceSet.onloadingdone`](https://developer.mozilla.org/en-US/docs/Web/API/FontFaceSet/onloadingdone)
    /// [`FontFaceSet.onloadingdone`](https://developer.mozilla.org/en-US/docs/Web/API/FontFaceSet/onloadingdone)
    [[nodiscard]] jsbind::Any onloadingdone() const;
    /// Setter of the `onloadingdone` attribute.
    /// [`FontFaceSet.onloadingdone`](https://developer.mozilla.org/en-US/docs/Web/API/FontFaceSet/onloadingdone)
    void onloadingdone(const jsbind::Any& value);
    /// [`FontFaceSet.onloadingerror`](https://developer.mozilla.org/en-US/docs/Web/API/FontFaceSet/onloadingerror)
    /// [`FontFaceSet.onloadingerror`](https://developer.mozilla.org/en-US/docs/Web/API/FontFaceSet/onloadingerror)
    [[nodiscard]] jsbind::Any onloadingerror() const;
    /// Setter of the `onloadingerror` attribute.
    /// [`FontFaceSet.onloadingerror`](https://developer.mozilla.org/en-US/docs/Web/API/FontFaceSet/onloadingerror)
    void onloadingerror(const jsbind::Any& value);
    /// The load method.
    /// [`FontFaceSet.load`](https://developer.mozilla.org/en-US/docs/Web/API/FontFaceSet/load)
    jsbind::Promise<jsbind::TypedArray<FontFace>> load(const jsbind::String& font);
    /// The load method.
    /// [`FontFaceSet.load`](https://developer.mozilla.org/en-US/docs/Web/API/FontFaceSet/load)
    jsbind::Promise<jsbind::TypedArray<FontFace>> load(const jsbind::String& font, const jsbind::String& text);
    /// The check method.
    /// [`FontFaceSet.check`](https://developer.mozilla.org/en-US/docs/Web/API/FontFaceSet/check)
    bool check(const jsbind::String& font);
    /// The check method.
    /// [`FontFaceSet.check`](https://developer.mozilla.org/en-US/docs/Web/API/FontFaceSet/check)
    bool check(const jsbind::String& font, const jsbind::String& text);
    /// [`FontFaceSet.ready`](https://developer.mozilla.org/en-US/docs/Web/API/FontFaceSet/ready)
    /// [`FontFaceSet.ready`](https://developer.mozilla.org/en-US/docs/Web/API/FontFaceSet/ready)
    [[nodiscard]] jsbind::Promise<FontFaceSet> ready() const;
    /// [`FontFaceSet.status`](https://developer.mozilla.org/en-US/docs/Web/API/FontFaceSet/status)
    /// [`FontFaceSet.status`](https://developer.mozilla.org/en-US/docs/Web/API/FontFaceSet/status)
    [[nodiscard]] FontFaceSetLoadStatus status() const;
};

} // namespace webbind