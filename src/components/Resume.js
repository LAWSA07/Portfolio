import React from 'react';
import { Container, Row, Col, Button } from 'react-bootstrap';
import { useState } from 'react';

export const Resume = () => {
  const [activeLink, setActiveLink] = useState('home');
  const onUpdateActiveLink = (value) => { setActiveLink(value); };

  return (
    <section className="resume" id="resume">
      <Container>
        <Row>
          <Col>
            <h2>My Resume</h2>
            <p>You can view or download my resume below:</p>
          </Col>
        </Row>
        <Row className="d-flex justify-content-center">
          <Col className="text-center">
            <Button
              variant="primary"
              href="/himanshu_resume.pdf"
              target="_blank"
              rel="noopener noreferrer"
            >
              View Resume
            </Button>
          </Col>
        </Row>
      </Container>
    </section>
  );
};
