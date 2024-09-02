const slides = document.querySelectorAll(".slide");
let count=0;
slides.forEach((slide, index) => {
    slide.style.left = `${index * 100}%`;
});

const slideimg = () => {
    slides.forEach((slide) => {
        slide.style.transform = `translateX(-${count * 100}%)`; // Fix: Added '%' for percentage
    });
};

const gonex=()=>{
    count++;
    slideimg();
}
const gopre=()=>{
    count--;
    slideimg();
}