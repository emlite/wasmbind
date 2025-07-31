#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "Node.hpp"
#include "enums.hpp"

class Element;


/// The CharacterData class.
/// [`CharacterData`](https://developer.mozilla.org/en-US/docs/Web/API/CharacterData)
class CharacterData : public Node {
    explicit CharacterData(Handle h) noexcept;

public:
    explicit CharacterData(const emlite::Val &val) noexcept;
    static CharacterData take_ownership(Handle h) noexcept;

    [[nodiscard]] CharacterData clone() const noexcept;
    /// Getter of the `data` attribute.
    /// [`CharacterData.data`](https://developer.mozilla.org/en-US/docs/Web/API/CharacterData/data)
    [[nodiscard]] jsbind::String data() const;
    /// Setter of the `data` attribute.
    /// [`CharacterData.data`](https://developer.mozilla.org/en-US/docs/Web/API/CharacterData/data)
    void data(const jsbind::String& value);
    /// Getter of the `length` attribute.
    /// [`CharacterData.length`](https://developer.mozilla.org/en-US/docs/Web/API/CharacterData/length)
    [[nodiscard]] unsigned long length() const;
    /// The substringData method.
    /// [`CharacterData.substringData`](https://developer.mozilla.org/en-US/docs/Web/API/CharacterData/substringData)
    jsbind::String substringData(unsigned long offset, unsigned long count);
    /// The appendData method.
    /// [`CharacterData.appendData`](https://developer.mozilla.org/en-US/docs/Web/API/CharacterData/appendData)
    jsbind::Undefined appendData(const jsbind::String& data);
    /// The insertData method.
    /// [`CharacterData.insertData`](https://developer.mozilla.org/en-US/docs/Web/API/CharacterData/insertData)
    jsbind::Undefined insertData(unsigned long offset, const jsbind::String& data);
    /// The deleteData method.
    /// [`CharacterData.deleteData`](https://developer.mozilla.org/en-US/docs/Web/API/CharacterData/deleteData)
    jsbind::Undefined deleteData(unsigned long offset, unsigned long count);
    /// The replaceData method.
    /// [`CharacterData.replaceData`](https://developer.mozilla.org/en-US/docs/Web/API/CharacterData/replaceData)
    jsbind::Undefined replaceData(unsigned long offset, unsigned long count, const jsbind::String& data);
    /// Getter of the `previousElementSibling` attribute.
    /// [`CharacterData.previousElementSibling`](https://developer.mozilla.org/en-US/docs/Web/API/CharacterData/previousElementSibling)
    [[nodiscard]] Element previousElementSibling() const;
    /// Getter of the `nextElementSibling` attribute.
    /// [`CharacterData.nextElementSibling`](https://developer.mozilla.org/en-US/docs/Web/API/CharacterData/nextElementSibling)
    [[nodiscard]] Element nextElementSibling() const;
    /// The before method.
    /// [`CharacterData.before`](https://developer.mozilla.org/en-US/docs/Web/API/CharacterData/before)
    jsbind::Undefined before(const jsbind::Any& nodes);
    /// The after method.
    /// [`CharacterData.after`](https://developer.mozilla.org/en-US/docs/Web/API/CharacterData/after)
    jsbind::Undefined after(const jsbind::Any& nodes);
    /// The replaceWith method.
    /// [`CharacterData.replaceWith`](https://developer.mozilla.org/en-US/docs/Web/API/CharacterData/replaceWith)
    jsbind::Undefined replaceWith(const jsbind::Any& nodes);
    /// The remove method.
    /// [`CharacterData.remove`](https://developer.mozilla.org/en-US/docs/Web/API/CharacterData/remove)
    jsbind::Undefined remove();
};

