// Book Data
const books = [
    {
        id: 1,
        title: "Atomic Habits",
        author: "James Clear",
        price: 499,
        image: "https://covers.openlibrary.org/b/id/10594764-L.jpg",
        description: "A book that teaches you how small habits can make big changes in life."
    },
    {
        id: 2,
        title: "The Alchemist",
        author: "Paulo Coelho",
        price: 350,
        image: "https://covers.openlibrary.org/b/id/8375031-L.jpg",
        description: "A philosophical novel that follows a young shepherd named Santiago."
    },
    {
        id: 3,
        title: "Rich Dad Poor Dad",
        author: "Robert Kiyosaki",
        price: 450,
        image: "https://covers.openlibrary.org/b/id/8231856-L.jpg",
        description: "A guide on financial literacy and the importance of assets."
    },
    {
        id: 4,
        title: "Ikigai",
        author: "Francesc Miralles",
        price: 399,
        image: "https://covers.openlibrary.org/b/id/9823733-L.jpg",
        description: "The Japanese secret to living a long and fulfilling life."
    },
    {
        id: 5,
        title: "The Power of Now",
        author: "Eckhart Tolle",
        price: 499,
        image: "https://covers.openlibrary.org/b/id/11122233-L.jpg",
        description: "A spiritual guide to living fully in the present moment."
    },
    {
        id: 6,
        title: "Think and Grow Rich",
        author: "Napoleon Hill",
        price: 299,
        image: "https://covers.openlibrary.org/b/id/11223344-L.jpg",
        description: "A classic on achieving financial success and personal growth."
    },
    {
        id: 7,
        title: "The Subtle Art of Not Giving a F*ck",
        author: "Mark Manson",
        price: 399,
        image: "https://covers.openlibrary.org/b/id/11334455-L.jpg",
        description: "A guide to living a better life by caring less about the unimportant."
    },
    {
        id: 8,
        title: "Deep Work",
        author: "Cal Newport",
        price: 450,
        image: "https://covers.openlibrary.org/b/id/11445566-L.jpg",
        description: "The ability to focus without distraction on cognitively demanding tasks."
    },
    {
        id: 9,
        title: "Zero to One",
        author: "Peter Thiel",
        price: 350,
        image: "https://covers.openlibrary.org/b/id/11556677-L.jpg",
        description: "Building companies that create new things rather than copying existing ones."
    },
    {
        id: 10,
        title: "The 7 Habits of Highly Effective People",
        author: "Stephen R. Covey",
        price: 499,
        image: "https://covers.openlibrary.org/b/id/11667788-L.jpg",
        description: "A guide to effective personal and professional development."
    },
    {
        id: 11,
        title: "Man's Search for Meaning",
        author: "Viktor E. Frankl",
        price: 399,
        image: "https://covers.openlibrary.org/b/id/11778899-L.jpg",
        description: "A psychological exploration of finding purpose in life."
    },
    {
        id: 12,
        title: "Grit",
        author: "Angela Duckworth",
        price: 450,
        image: "https://covers.openlibrary.org/b/id/11889900-L.jpg",
        description: "The power of passion and perseverance."
    },
    {
        id: 13,
        title: "The Lean Startup",
        author: "Eric Ries",
        price: 499,
        image: "https://covers.openlibrary.org/b/id/11990011-L.jpg",
        description: "A systematic approach to creating successful startups."
    },
    {
        id: 14,
        title: "Start With Why",
        author: "Simon Sinek",
        price: 399,
        image: "https://covers.openlibrary.org/b/id/12001122-L.jpg",
        description: "The importance of understanding the 'Why' in leadership and business."
    },
    {
        id: 15,
        title: "The Four Agreements",
        author: "Don Miguel Ruiz",
        price: 299,
        image: "https://covers.openlibrary.org/b/id/12112233-L.jpg",
        description: "A spiritual guide to personal freedom."
    },
    {
        id: 16,
        title: "Mindset",
        author: "Carol S. Dweck",
        price: 450,
        image: "https://covers.openlibrary.org/b/id/12223344-L.jpg",
        description: "How adopting a growth mindset leads to success."
    },
    {
        id: 17,
        title: "Drive",
        author: "Daniel H. Pink",
        price: 399,
        image: "https://covers.openlibrary.org/b/id/12334455-L.jpg",
        description: "The surprising truth about what motivates us."
    },
    {
        id: 18,
        title: "The 5 AM Club",
        author: "Robin Sharma",
        price: 350,
        image: "https://covers.openlibrary.org/b/id/12445566-L.jpg",
        description: "The power of waking up early for a productive day."
    },
    {
        id: 19,
        title: "Can't Hurt Me",
        author: "David Goggins",
        price: 499,
        image: "https://covers.openlibrary.org/b/id/12556677-L.jpg",
        description: "Overcoming adversity and mental challenges to achieve greatness."
    },
    // Additional books
    {
        id: 20,
        title: "The Secret",
        author: "Rhonda Byrne",
        price: 399,
        image: "https://covers.openlibrary.org/b/id/12667788-L.jpg",
        description: "A guide to harnessing the law of attraction for success."
    },
    {
        id: 21,
        title: "The Intelligent Investor",
        author: "Benjamin Graham",
        price: 799,
        image: "https://covers.openlibrary.org/b/id/12778899-L.jpg",
        description: "The definitive book on value investing."
    },
    {
        id: 22,
        title: "The Art of War",
        author: "Sun Tzu",
        price: 250,
        image: "https://covers.openlibrary.org/b/id/12889900-L.jpg",
        description: "Ancient strategies for leadership and success."
    },
    {
        id: 23,
        title: "The Psychology of Money",
        author: "Morgan Housel",
        price: 499,
        image: "https://covers.openlibrary.org/b/id/12990011-L.jpg",
        description: "How money impacts our decisions and happiness."
    },
    {
        id: 24,
        title: "How to Win Friends and Influence People",
        author: "Dale Carnegie",
        price: 350,
        image: "https://covers.openlibrary.org/b/id/13001122-L.jpg",
        description: "A classic on building relationships and influencing others."
    },
    {
        id: 25,
        title: "The Magic of Thinking Big",
        author: "David J. Schwartz",
        price: 399,
        image: "https://covers.openlibrary.org/b/id/13112233-L.jpg",
        description: "Achieve big success by thinking big."
    },
    {
        id: 26,
        title: "The 48 Laws of Power",
        author: "Robert Greene",
        price: 799,
        image: "https://covers.openlibrary.org/b/id/13223344-L.jpg",
        description: "A guide to power dynamics in life and work."
    },
    {
        id: 27,
        title: "The Subtle Art of Not Giving a F*ck",
        author: "Mark Manson",
        price: 399,
        image: "https://covers.openlibrary.org/b/id/13334455-L.jpg",
        description: "Living a better life by caring less about the unimportant."
    },
    {
        id: 28,
        title: "The 10X Rule",
        author: "Grant Cardone",
        price: 699,
        image: "https://covers.openlibrary.org/b/id/13445566-L.jpg",
        description: "Set massive goals and take massive action."
    },
    {
        id: 29,
        title: "Atomic Habits",
        author: "James Clear",
        price: 499,
        image: "https://covers.openlibrary.org/b/id/10594764-L.jpg",
        description: "A guide to building small habits that can change your life."
    },
    {
        id: 30,
        title: "The 5 AM Club",
        author: "Robin Sharma",
        price: 350,
        image: "https://covers.openlibrary.org/b/id/13556677-L.jpg",
        description: "The power of waking up early for a productive day."
    },
    {
        id: 31,
        title: "Shoe Dog",
        author: "Phil Knight",
        price: 699,
        image: "https://covers.openlibrary.org/b/id/13667788-L.jpg",
        description: "The story of Nike’s founder and the building of an empire."
    },
    {
        id: 32,
        title: "Becoming",
        author: "Michelle Obama",
        price: 499,
        image: "https://covers.openlibrary.org/b/id/13778899-L.jpg",
        description: "A memoir by the former First Lady of the United States."
    },
    {
        id: 33,
        title: "Educated",
        author: "Tara Westover",
        price: 399,
        image: "https://covers.openlibrary.org/b/id/13889900-L.jpg",
        description: "A memoir about growing up in a survivalist family."
    },
    {
        id: 34,
        title: "The Power of Habit",
        author: "Charles Duhigg",
        price: 499,
        image: "https://covers.openlibrary.org/b/id/13990011-L.jpg",
        description: "How habits work and how you can form new habits."
    },
    {
        id: 35,
        title: "Dare to Lead",
        author: "Brené Brown",
        price: 599,
        image: "https://covers.openlibrary.org/b/id/14001122-L.jpg",
        description: "A guide to leadership based on courage, vulnerability, and trust."
    },
    {
        id: 36,
        title: "Educated",
        author: "Tara Westover",
        price: 399,
        image: "https://covers.openlibrary.org/b/id/14112233-L.jpg",
        description: "A memoir about growing up in a survivalist family."
    }
];
const bookContainer = document.getElementById('bookContainer');
const searchBar = document.getElementById('searchBar');
const cartCount = document.getElementById('cart-count');

// Retrieve cart from localStorage or initialize empty array
let cart = JSON.parse(localStorage.getItem("bookCart")) || [];

// Function to display books with a discount
function displayBooks(bookList) {
    bookContainer.innerHTML = "";
    bookList.forEach(book => {
        const discountedPrice = (book.price * 0.85).toFixed(2); // 15% discount

        const bookCard = document.createElement('div');
        bookCard.classList.add('book-card');

        bookCard.innerHTML = `
            <img src="${book.image}" alt="${book.title}">
            <h3>${book.title}</h3>
            <p>by ${book.author}</p>
            <p class="price">
                <span class="original-price">₹${book.price}</span> 
                <span class="discounted-price">₹${discountedPrice}</span>
            </p>
            <p class="description">${book.description}</p>
            <button onclick="addToCart(${book.id})">Add to Cart</button>
        `;

        bookContainer.appendChild(bookCard);
    });
}

// Function to update cart count
function updateCartCount() {
    cartCount.textContent = cart.length;
}

// Function to add book to cart
function addToCart(bookId) {
    const selectedBook = books.find(b => b.id === bookId);
    cart.push(selectedBook);
    localStorage.setItem("bookCart", JSON.stringify(cart));
    updateCartCount();
    alert(`"${selectedBook.title}" added to cart! 🛒`);
}

// Event listener for search functionality
searchBar.addEventListener("input", () => {
    const keyword = searchBar.value.toLowerCase();
    const filteredBooks = books.filter(book =>
        book.title.toLowerCase().includes(keyword) ||
        book.author.toLowerCase().includes(keyword)
    );
    displayBooks(filteredBooks);
});

// Initialize
displayBooks(books);
updateCartCount();
