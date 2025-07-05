#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "HTMLElement.hpp"
#include "enums.hpp"

class OffscreenCanvas;
class MediaStream;


class HTMLCanvasElement : public HTMLElement {
    explicit HTMLCanvasElement(Handle h) noexcept;

public:
    explicit HTMLCanvasElement(const emlite::Val &val) noexcept;
    static HTMLCanvasElement take_ownership(Handle h) noexcept;

    HTMLCanvasElement clone() const noexcept;
    HTMLCanvasElement();
    unsigned long width() const;
    void width(unsigned long value);
    unsigned long height() const;
    void height(unsigned long value);
    jsbind::Any getContext(const jsbind::DOMString& contextId);
    jsbind::Any getContext(const jsbind::DOMString& contextId, const jsbind::Any& options);
    jsbind::USVString toDataURL();
    jsbind::USVString toDataURL(const jsbind::DOMString& type);
    jsbind::USVString toDataURL(const jsbind::DOMString& type, const jsbind::Any& quality);
    jsbind::Undefined toBlob(const jsbind::Function& callback);
    jsbind::Undefined toBlob(const jsbind::Function& callback, const jsbind::DOMString& type);
    jsbind::Undefined toBlob(const jsbind::Function& callback, const jsbind::DOMString& type, const jsbind::Any& quality);
    OffscreenCanvas transferControlToOffscreen();
    MediaStream captureStream();
    MediaStream captureStream(double frameRequestRate);
};

