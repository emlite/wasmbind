#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "Node.hpp"
#include "enums.hpp"

class Element;


class CharacterData : public Node {
    explicit CharacterData(Handle h) noexcept;

public:
    explicit CharacterData(const emlite::Val &val) noexcept;
    static CharacterData take_ownership(Handle h) noexcept;

    CharacterData clone() const noexcept;
    jsbind::DOMString data() const;
    void data(const jsbind::DOMString& value);
    unsigned long length() const;
    jsbind::DOMString substringData(unsigned long offset, unsigned long count);
    jsbind::Undefined appendData(const jsbind::DOMString& data);
    jsbind::Undefined insertData(unsigned long offset, const jsbind::DOMString& data);
    jsbind::Undefined deleteData(unsigned long offset, unsigned long count);
    jsbind::Undefined replaceData(unsigned long offset, unsigned long count, const jsbind::DOMString& data);
    Element previousElementSibling() const;
    Element nextElementSibling() const;
    jsbind::Undefined before(const jsbind::Any& nodes);
    jsbind::Undefined after(const jsbind::Any& nodes);
    jsbind::Undefined replaceWith(const jsbind::Any& nodes);
    jsbind::Undefined remove();
};

