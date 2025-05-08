const jobForm = document.getElementById('jobForm');
const jobsContainer = document.getElementById('jobsContainer');

jobForm.addEventListener('submit', function (e) {
  e.preventDefault();

  const title = document.getElementById('title').value.trim();
  const company = document.getElementById('company').value.trim();
  const description = document.getElementById('description').value.trim();

  if (title && company && description) {
    const jobCard = document.createElement('div');
    jobCard.classList.add('job-card');
    jobCard.innerHTML = `
      <h3>${title}</h3>
      <p><strong>Company:</strong> ${company}</p>
      <p>${description}</p>
    `;
    jobsContainer.prepend(jobCard);

    // Reset form
    jobForm.reset();
  }
});
