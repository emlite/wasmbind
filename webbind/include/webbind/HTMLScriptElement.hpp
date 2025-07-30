#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "HTMLElement.hpp"
#include "enums.hpp"

class DOMTokenList;


class HTMLScriptElement : public HTMLElement {
    explicit HTMLScriptElement(Handle h) noexcept;

public:
    explicit HTMLScriptElement(const emlite::Val &val) noexcept;
    static HTMLScriptElement take_ownership(Handle h) noexcept;

    HTMLScriptElement clone() const noexcept;
    HTMLScriptElement();
    jsbind::String type() const;
    void type(const jsbind::String& value);
    jsbind::String src() const;
    void src(const jsbind::String& value);
    bool noModule() const;
    void noModule(bool value);
    bool async() const;
    void async(bool value);
    bool defer() const;
    void defer(bool value);
    DOMTokenList blocking() const;
    jsbind::String crossOrigin() const;
    void crossOrigin(const jsbind::String& value);
    jsbind::String referrerPolicy() const;
    void referrerPolicy(const jsbind::String& value);
    jsbind::String integrity() const;
    void integrity(const jsbind::String& value);
    jsbind::String fetchPriority() const;
    void fetchPriority(const jsbind::String& value);
    jsbind::String text() const;
    void text(const jsbind::String& value);
    static bool supports(const jsbind::String& type);
    jsbind::String charset() const;
    void charset(const jsbind::String& value);
    jsbind::String event() const;
    void event(const jsbind::String& value);
    jsbind::String htmlFor() const;
    void htmlFor(const jsbind::String& value);
    jsbind::String attributionSrc() const;
    void attributionSrc(const jsbind::String& value);
};

